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
        int n;
        cin >> n;
        int t,pro,rev,r,c,max=0;
        for(int i=999;i>99;i--)
        {
            for(int j=999;j>99;j--)
            {
                pro=i*j;
                if(n>pro)
                {
                    c=pro;
                    rev=0;
                    while(c>0)
                    {
                        r=c%10;
                        rev=rev*10+r;
                        c/=10;
                    }
                    if(rev==pro)
                    {
                        if(pro>max)
                        max=pro;
                    }
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
