#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define phb push_back
#define ppb pop_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define asc(x) sort((x).begin(), (x).end())
#define des(x) sort((x).rbegin(), (x).rend())
#define allout(x) for(auto &it: x) cout<<it<<" "; cout<<endl
#define out(y,a,n) for(ll i=a; i<=n; i++) cout<<y[i]<<" "; cout<<endl
#define fix(n,val) fixed<<setprecision(n)<<val
#define padding0(n,val) setw(n)<<setfill('0')<<val
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)


int main() {
    fast_io;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;
    
    for(int i = 1; i <= n; i++) {
        if(i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
        if(i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
        if(i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
    }
    
    cout << dp[n] << endl;
   
    return 0;
}
