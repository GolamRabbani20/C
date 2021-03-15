#include<stdio.h>
#include<stdlib.h>
int i;
void cls()
{
    system("CLS");
}
void qick_sort(int a[],int left,int right)
{

    int pivotLoc;
    if(left<right)
    {
        pivotLoc=partition(a,left,right);
        qick_sort(a,0,pivotLoc-1);
        qick_sort(a,pivotLoc+1,right);

    }
}

int partition(int a[],int left,int right)
{

    int pivot,l,r,i,temp;
    pivot=a[left];
    l=left;
    r=right;
    do
    {
        while(pivot > a[l] && l<=r)
        {
            l++;
        }
        while (pivot < a[r])
        {
            r--;
        }
        if(pivot > a[r] || pivot < a[l])
        {
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

    while (l < r);

    a[l]=a[r];
    a[r]=pivot;

    return (r);

}


void merge_sort(int a[],int p, int r)
{
    int q, i,loo;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q); //First Partition
        merge_sort(a,q+1,r); //Second Partition
        merge(a,p,q,r); //Merging

    }
}
void merge( int a[],int p, int q, int r)
{

    int L[30],R[30];
    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;

    for(i=0; i<n1; i++)
        L[i]=a[p+i];

    for(j=0; j<n2; j++)
        R[j]=a[q+1+j];


    L[i]=9999;
    R[j]=9999;

    i=0;
    j=0;


    for(k=p; k<=r; k++)

    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
}

int linear(int array[],int size)
{
    int item, i, n;
    cls();

    printf("Enter a number to search\n");

    scanf("%d", &item);

    for (i = 0; i < size; i++)
    {
        if (array[i] == item)
        {
            printf("%d is present at location %d.\n", item, i);
            break;
        }
    }

    if (i == size+1)
    {
        printf("Not Found");
    }
    return 0;
}

int binary(int array[],int size)
{
    int beg,end, mid,item;
    cls();
    printf("Enter value to find\n");
    scanf("%d", &item);


    beg = 0;
    end = size-1;
    mid = (beg+end)/2;

    while (beg <= end)
    {
        if (item<array[mid])
        {
            end = mid - 1;
        }

        else if (array[mid] == item)
        {
            printf("%d found at index %d.\n", item, mid);
            break;
        }
        else
        {
            beg = mid + 1;
        }


        mid = (beg + end)/2;
    }
    if (beg > end)
    {
        printf("Not found! %d is n't present in the array.\n", item);
    }


    return 0;
}



void display(int array[],int size)
{
    cls();
    printf("The Array is: ");

    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    menu(array,size);
}
menu(int array[],int size)
{
    printf("\n\nPress 1 to Display array.");
    printf("\nPress 2 to Sort the array.");
    printf("\nPress 3 to Search Element.\n");
    int c;
    printf("Your Answer:");
    scanf("%d",&c);


    switch (c)
    {
    case 1:
        display(array,size);
        break;



    case 2: //Sorting
        cls();
        printf("Select Sorting Algorithm: ");
        printf("\n\nPress 1 to Use Quick Sort.");
        printf("\nPress 2 to Use Merge Sort.");
        printf("\nPress 3 to Exit.\n");
        printf("Your answer:");
        scanf("%d",&c);
        switch (c)
        {

        case 1:
            cls();
            printf("Quick Sort is Applied!");
            qick_sort(array,0,size-1);
            menu(array,size);
            break;


        case 2:

            cls();
            printf("Merge Sort is Applied!");
            merge_sort(array,0,size-1);
            menu(array,size);
            break;

        default:
            cls();
            printf("Invalid Number!");
            menu(array,size);
        }
        break;




    case 3: //Searching
        cls();
        printf("Select Searching Algorithm: ");
        printf("\n\nPress 1 to Use Linear Search.");
        printf("\nPress 2 to Use Binary Search.");
        printf("\nPress 3 to Exit.");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            linear(array,size);
            menu(array,size);
            break;


        case 2:
            binary(array,size);
            menu(array,size);
            break;
        }
        break;
        default:
            cls();
            printf("Invalid Number!");
            menu(array,size);

    }
}
int main()
{
    int size;
    printf("Enter Array Size: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter Array Elements: ");
    for(i=0; i<size; i++)
    {

        scanf("%d",&array[i]);
    }
    cls();
    printf("You have entered the array sucessfully.");
    menu(array,size);

}


