#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n,k,m,c=0;
    cin>>n>>k;
    long int a[n],b[k];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<k;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(b[i]==a[j])
            {   c++;
                m=j+1;
                a[j]=99999;
                cout<<m<<" ";
                break;
            }
        }
        if(c==0)
        cout<<-1<<" ";
        else
        c=0;
    }
    return 0;
}
