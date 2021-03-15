#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,i,p,m,j,k,c,max=0;
    cin>>i>>j;
    cout<<i<<' '<<j<<' ';
    for(k=i;k<=j;k++){
        n=k;
        c=1;
    while(n!=1)
    {
        if(n%2==0)
        n=n/2;

        else
        n=3*n+1;
        c++;
    }
        if(c>max){
          max=c;
          p=k;
        }

    }
    cout<<max<<endl<<"Lucky number:"<<p<<endl;
    return 0;
}

