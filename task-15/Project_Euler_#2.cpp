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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n,arr[1000],sum=0;
        int t1=1,t2=2,a=1;
        arr[0]=1;
        arr[1]=2;
        cin >> n;
        while(true)
    {
        a++;
        arr[a]=t1+t2;
        t1=t2;
        t2=arr[a];
        if(arr[a]>n)
        {
            a--;
            break;
        }
        
    }
    for(int i=1;i<=a;i++)
    {
        if(arr[i]%2==0)
        sum+=arr[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}
