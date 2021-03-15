#include<stdio.h>
int main()
{
    int A[]={10,16,8,12,15,6,3,52,45,0,29};
    int size=sizeof(A)/sizeof(A[0]);
    int low,high,k;
    printf("The given Unsorted array is: ");
    printArray(A,size);
    A[k]=quickSort(A,0,size-1);
    printf("\n\nAfter sorting array is: ");
    printArray(A,size);
    printf("\n");
    return 0;
}
void printArray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}
void quickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
    }
}
int partition(int A[],int l,int h)
{
    int pivot=A[l],i,j;
    i=l;
    j=h;

    while(i<j)
    {
        do{
            i++;
        }while(A[i]<=pivot);

        do{
            j--;
        }while(A[j]>pivot);

        if(i<j)
        swap(&A[i],&A[j]);

    }
    swap(&A[l],&A[j]); //That means pivot will be swap with A[j]
    return j;

}

void swap(int *a,int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
}
