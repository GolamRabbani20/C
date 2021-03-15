#include<stdio.h>
int main()
{
    //int A[]={10,16,8,12,15,6,3,52,45,0,29};
    int A[200],i,size;
    printf("Enter array size n: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&A[i]);
    //int size=sizeof(A)/sizeof(A[0]);
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
        }while(A[i]<=pivot);  // If A[i]<=pivot) is false then A[i]>=pivot) will be true


        do{
            j--;
        }while(A[j]>pivot);  // If A[j]>pivot) is false then A[j]<pivot) will be true

        if(i<j)
        swap(&A[i],&A[j]);

    }
    swap(&A[l],&A[j]); //That means pivot will be swap with A[j]
    return j;

}

void swap(int* a,int* b)
{
    int x=*a;
    *a=*b;
    *b=x;
}
