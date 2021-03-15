#include <stdio.h>
#include <math.h>
#include <float.h>
#include <fenv.h>
#include <tgmath.h>
#include <stdbool.h>
#include <assert.h>

double compute_fn(double z)  // [1]
{
        #pragma STDC FENV_ACCESS ON  // [2]
        int FLT_EVAL_METHOD;
        assert(FLT_EVAL_METHOD == 2);  // [3]

        if (isnan(z))  // [4]
                puts("z is not a number");

        if (isinf(z))
                puts("z is infinite");

        long double r = 7.0 - 3.0/(z - 2.0 - 1.0/(z - 7.0 + 10.0/(z - 2.0 - 2.0/(z - 3.0)))); // [5, 6]

        feclearexcept(FE_DIVBYZERO);  // [7]

        bool raised = fetestexcept(FE_OVERFLOW);  // [8]

        if (raised)
                puts("Unanticipated overflow.");

        return r;
}

int main(void)
{
        #ifndef __STDC_IEC_559__
        puts("Warning: __STDC_IEC_559__ not defined. IEEE 754 floating point not fully supported."); // [9]
        #endif

        #pragma STDC FENV_ACCESS ON

        #ifdef TEST_NUMERIC_STABILITY_UP
        fesetround(FE_UPWARD);                   // [10]
        #elif TEST_NUMERIC_STABILITY_DOWN
        fesetround(FE_DOWNWARD);
        #endif

        printf("%.7g\n", compute_fn(3.0));
        printf("%.7g\n", compute_fn(NAN));

        return 0;
}
