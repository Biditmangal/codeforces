#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

int matches=0;

int solve(int n){
    int ans=0;  
    int x,k=1;

    x = floor(log2(n));
    // cout<<"x "<<x<<endl;

    FOR(i,0,x){
        k=2*k;
    }

    // cout<<"k "<<k<<endl ;

    matches+=k/2;
    // cout<< "matches "<<matches<<endl;
    n-=k/2;
    // cout<< "n "<<n<<endl;
    if(n==1){
        return matches;
    }
    else{
        solve(n);
    }
    
}

int main(){

    int n,b,p;
    cin>>n>>b>>p;
    int ans=solve(n)*(2*b+1);

    cout<<ans<<" "<< p*n<<endl;

    return 0;
}