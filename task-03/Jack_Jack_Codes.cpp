#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k,m,c=0,temp;
    cin>>k>>m;
    int a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {    
            temp=a[i]+a[j];
            if(temp==m && i!=j)
            {
                c=c+1;
                break;
            }
        }
        if(c>0)
        break;
    }
    if(c>0)
    cout<<"True";
    else
    cout<<"False";
    return 0;
}
