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
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) FOR(i, 0, (int)n)
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
#define MS0(x) memset(x, 0, sizeof(x))
#define MS1(x) memset(x, 1, sizeof(x))
#define SORT(a, n) sort(begin(a), begin(a) + n)
#define REV(a, n) reverse(begin(a), begin(a) + n)
#define ll long long
#define pii pair<int, int>
#define MOD 1000000007

const int mxN = 2e5;

void solve()
{
    int n;
    cin>>n;
    
    // int a[1001];
    int cnt0=0,cnt1=0;
    FOR(i,1,n+1){
        int x;
        cin>>x;
        x ? cnt1++ : cnt0++;
    }

    if(cnt1<=n/2){
        cout<<cnt0<<endl;
        FOR(i,0,cnt0){
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else{
        if(cnt0<n/2){
            if(cnt1%2==0){
                cout<<cnt1<<endl;
                FOR(i,0,cnt1){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<cnt1-1<<endl;
                FOR(i,0,cnt1-1){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
    }

}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}