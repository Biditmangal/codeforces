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
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
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

ll a[31];

int main(){

	int t, n;
	cin>>t;
	REP(tc, t){
		cin>>n;
    REP(i,n){
      a[i]=pow(2,i+1);
    }
    int i=0,j=n-1;
    int asum=a[n-1],total=0;
    for(int k=0;k< n/2 - 1 ;k++){
      asum+=a[k];
    }
    for(int k=0;k<n;k++){
      total+=a[k];
    }
    cout<<abs(2*asum-total)<<"\n";

	}
	return 0;
}
