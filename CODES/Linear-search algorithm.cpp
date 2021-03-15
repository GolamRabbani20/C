#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,m,flag=0;
    cout<<"Enter the size of array a:";
    cin>>m;
    for(i=0; i<m; i++)
        cin>>a[i];
        cout<<endl;

    for(i=0; i<m; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;

    cout<<"Enter a value of n to search:";
    cin>>n;
    for(i=0; i<m; ++i)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"True:"<<"The value is find in the index of :"<<i+1;
    else
        cout<<"False";
    return 0;
}

