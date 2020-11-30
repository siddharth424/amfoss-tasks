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
        int k,r,num=0;
        unsigned int b=1000000007;
        cin>>k;
        long int a[k];
        a[0]=1;
        a[1]=2;
        a[2]=3;
        for(int i=3;i<k;i++)
        {
            a[i]=(a[i-1]%b+a[i-2]%b+a[i-3]%b)%b;
        }
        while(a[k-1]!=0)
        {
            r=a[k-1]%10;
            num=num*10+r;
            a[k-1]=(a[k-1]-r)/10;
        }
        cout<<num<<endl;
    }   
    return 0;
}
