#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,h,l=10;
    cin>>t;
    while(t>0)
    {
        string str;
        int k,temp=0,c=0;
        if(l==10)
        cin>>k;
        else
        k=h;
        while(cin>>str && c!=k)
        {
            c++;
            if(isdigit(str[0]))
            {
                h=int(str[0])-48;
                l=11;
                break;
            }
            else
            l=10;
        }
        if(k==c && l==10)
        {
            for(long unsigned int j=0;j<str.size();j++)
            {
                temp=temp+int(str[j]);
            }
            cout<<temp<<endl;
        }
        else
        cout<<-1<<endl;
        t--;
    }  
    return 0;
}
