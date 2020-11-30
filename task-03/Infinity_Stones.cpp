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
        int n,m,k,temp=0;
        cin>>n>>m>>k;
        int a[m],b[m];
        if(k>m)
        k=m;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(b, b + m);
        for(int i=m-1;i>m-1-k;i--)
        {
            temp=b[i]+temp;
        }
        if(temp>=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }   
    return 0;
}
