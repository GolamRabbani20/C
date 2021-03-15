#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(25);
    v.push_back(100);
    v.push_back(12);

    printf("%d\n",v[0]);
    printf("%d\n",v[1]);
    printf("%d\n",v[2]);

    return 0;
}
