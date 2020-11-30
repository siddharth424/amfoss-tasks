#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,o=0,z=0,temp;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        o=o+1;
        else
        ++z;
    }
    if(o==0 && z==0)
    cout<<0;
    else if(o==z)
    cout<<2;
    else
    cout<<1;
    return 0;
}
