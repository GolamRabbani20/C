#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    vector<int>R (n);
    cout<<"Size= "<<n<<endl;
    cout<<"Enter Elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>R[i];

    cout<<"............................."<<endl;
    for(int i=0; i<R.size(); i++)
        cout<<R[i]<<endl;
    return 0;
}
