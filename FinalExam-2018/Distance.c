#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
} d1,d2,sum_of_distances;

int main()
{
    printf("Enter 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);

    printf("\nEnter 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%d",&d2.feet);
    printf("Enter inch: ");
    scanf("%f",&d2.inch);

    sum_of_distances.feet = d1.feet+d2.feet;
    sum_of_distances.inch = d1.inch+d2.inch;

    if (sum_of_distances.inch>=12.0)
    {
        sum_of_distances.inch = sum_of_distances.inch-12.0;
        ++sum_of_distances.feet;
    }
    printf("\nSum of distances = %d\' - %.1f\"",sum_of_distances.feet,sum_of_distances.inch);
    return 0;
}
