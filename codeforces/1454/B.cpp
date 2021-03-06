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
#include <array>

using namespace std;

#define sp system("pause")
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

const int mxA = 2e5+7;
int solve()
{
    // code goes here...
    int n;
    cin>>n;
    int c[n+1]={0},a[n+1];
    for(int i=1;i<n+1;i++){
        // int x;
        cin>>a[i];
        ++c[a[i]];
    }
    int ans=-1;
    // FOR(i,1,n+1){
    //     cout<<c[i]<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        if(c[i]==1){
            ans=i;
            break;
        }
    }

    for(int i=1;i<n+1;i++){
        if(a[i]==ans){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}