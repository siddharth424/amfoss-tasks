#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    for(int i=0;i<=a/2;i++)
    {
        for(int j=0;j<a/2-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"D";
        }
        for(int j=0;j<a/2-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<a/2;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<=a-2*i-3;j++)
        {
            cout<<"D";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
       
    return 0;
}
