#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int i;
    vector<int>v;
    vector<int>::iterator t;

    for(i=0;i<=5;i++)
        v.push_back(i);
        cout<<"The vector is:"<<endl;
        for(i=0;i<=5;i++)
            cout<<v[i]<<"\t";

            for(t=v.begin();t<v.end();t++)
                cout<<*t<<endl;


        return 0;
}
