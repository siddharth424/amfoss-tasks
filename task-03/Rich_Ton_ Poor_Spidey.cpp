#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n,k,temp=1;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[n-1]=a[n-1]-k;
        for(int i=0;i<n;i++)
        {
            temp=temp*a[i];
        }
        cout<<temp<<endl;
    }   
    return 0;
}
