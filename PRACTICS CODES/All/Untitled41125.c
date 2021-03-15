#include<stdlib.h>
#include<stdio.h>
int main()
{
    int array[]= {3,9,1,89,25,75,2,65,22,87};
    int array_size=sizeof(array)/sizeof(array[0]);

    printf("The given unsorted array is: ");
    printArray(array,array_size);

    dividing(array,0,array_size-1);

    printf("The sorted array is : ");
    printArray(array,array_size);

    return 0;
}


void printArray(int a[],int size)

{
    int i;
    for( i=0; i<size; i++)
        printf("%d ",a[i]);
        printf("\n");
}

void dividing(int array,int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        dividing(array,l,m);
        dividing(array,m+1,r);

        merge(array,l,m,r);
    }
}
void merge(int array[],int l,int m,int r)
{
    int i,j,k;
    int sLa=m-l+1;
    int sRa=r-m;

    int L[sLa],R[sRa];

    for(i=0; i<sLa; i++)
        L[i]=array[l+i];
    for(j=0; j<sRa; j++)
        R[j]=array[m+1+j];

    i=0;
    j=0;
    k=1;

    while(i<sLa && j<sRa)
    {
        if(L[i]<=R[j])
        {
            array[k]=L[i];
            i++;
        }
        else
        {
            array[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<sLa)
    {
        array[k]=L[i];
        i++;
        k++;

    }

    while(j<sRa)
    {
        array[k]=R[j];
        j++;
        k++;

    }
}

