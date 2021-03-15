
//Natural Number 1 to n


#include <stdio.h>

int Natural_Number (int n)  {
    if (n < 1)  {
        return 0;
    }
    else  {
        return n + Natural_Number(n-1);
    }

}

int main ()
{
    int x,y;
    scanf("%d",&x);
    y = Natural_Number(x);
    printf("%d\n",y);

    return 0;
}
