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

const int mxN = 2e5;

void solve(){

    int n;
    cin>>n;
    ll a[n];

    FOR(i,0,n){
        cin>>a[i];
    }

    ll ans=0;
    sort(a,a+n,greater<int>());
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%2==0){
                ans+=a[i];
            }
        }
        else{
            if(a[i]%2==1){
                ans-=a[i];
            }
        }
    }
    
    if(ans==0){
        cout<<"Tie"<<endl;
    }
    else if(ans>0){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }

}

int main(){

    int t;
    cin>>t;
    // t=1;
    
    while(t--) solve();

    return 0;
}