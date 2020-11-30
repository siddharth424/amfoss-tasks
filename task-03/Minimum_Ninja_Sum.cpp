#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,k,arr[20],sum[15];
    int t;
    cin>>t;
    while(t>0)
    {
    
    int c=0;
    cin>>a>>k;
    for(int i=0;i<20;i++)
    {
        arr[i]=a%10;
        a=a/10;
        c++;
        if(a==0)
        break;
    }
    if(c>k)
    {
        for(int i=0;i<=c-k;i++)
        {
            sum[i]=0;
            for(int j=0;j<k;j++)
            {
                sum[i]+=arr[i+j];
            }
        }
        sort(sum,sum+(c-k+1));
        int ns=sum[1]-sum[0]; 
        for (int i=0;i<=c-k;i++)
        ns=min(ns,abs(sum[i]-sum[i-1])); 
        cout<<ns<<endl;
    }
    else
    cout<<-1<<endl;
    t--;
    }
    return 0;
}
