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
        long n;
        cin >> n;
        int max=1;
        while(n%2==0)
        {
            max=2;
            n=n/2;
        }
         for(int i=3;i<=n;i++) 
        { 
            while (n%i==0)
            { 
                max=i; 
                n=n/i; 
            } 
        }
    cout<<max<<endl;
    }
    return 0;
}
