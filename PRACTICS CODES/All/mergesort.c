#include<stdlib.h>
#include<stdio.h>

int main()
{
    int k,A[]= {2,10,28,12,11,13,5,6,7};
    int size=sizeof(A)/sizeof(A[0]);

    printf("The given unsorted array is: ");
    printArray(A,size);

    A[k]=mergeSort(A,0,size-1);

    printf("The sorted array is: ");
    printArray(A,size);

    return 0;
}

void printArray(int arr[],int s)
{
    int i;
    for(i=0; i<s; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void mergeSort(int A[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(A,l,m);
        mergeSort(A,m+1,r);
        merge(A,l,m,r);
    }
}
void merge(int A[],int l,int m,int r)
{
    int i,j,k;
    int s1=m-l+1;
    int s2=r-m;

    int L[s1],R[s2];

    for(i=0; i<s1; i++)
        L[i]=A[l+i];
    for(j=0; j<s2; j++)
        R[j]=A[m+1+j];

    i=0;
    j=0;
    k=1;

    while(i<s1 && j<s2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<s1)
    {
        A[k]=L[i];
        i++;
        k++;

    }
    while(j<s2)
    {
        A[k]=R[j];
        j++;
        k++;
    }
}
