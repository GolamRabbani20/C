#include<stdio.h>
int main()
{
    int a[200],n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    a[i]=fibo(a,n);
    i=0;
    while(i<n){
    printf("%d ",a[i]);
    i++;
    }
    return 0;
}
int fibo(int m[],int p)
{
    int i;
    m[0]=0;
    m[1]=1;
    for(i=2; i<p; i++){
    m[i]=m[i-1]+m[i-2];
    }

    return m;

}
