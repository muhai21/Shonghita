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
	 int T;
    cin >> T;

    while(T--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll i = 0, r = 0;

        while(i < n) {
            if(s[i] == 'B') {
                r++;
                i += k;
            } 
            else i++;
        }

        cout << r << endl;
    }
	return 0;
}
