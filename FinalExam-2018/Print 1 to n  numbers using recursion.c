#include <stdio.h>
void Natural_numbers(int x,int y);
int main()
{
    int x,y;
    printf("Enter lower limit: ");
    scanf("%d",&x);
    printf("Enter upper limit: ");
    scanf("%d",&y);

    printf("All natural numbers from %d to %d are: \n",x,y);
    Natural_numbers(x,y);

    return 0;
}
   void Natural_numbers(int x,int y)
{
    if(x>y)
    return;
    else
        printf("%d\n",x);
    Natural_numbers(x+1,y);
}
