#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k;
    cin>>k;
    int a[k],b[k],c[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<k;i++)
    {
        c[i]=b[i]/a[i];
    }
    sort(c,c+k);
    cout<<c[0];
      
    return 0;
}
