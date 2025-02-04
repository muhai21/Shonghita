#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long int n, a, b, c;
	    cin >> n >> a >> b >> c;
	    int d = (n / (a + b + c)) * (a + b + c);
	    int count = n / (a + b + c) * 3;
	    if(d < n) {
	        d += a;
	        count++;
	    }
	    if(d < n) {
	        d += b;
	        count++;
	    }
	    if(d < n) {
	        d += b;
	        count++;
	    }
        cout << count << endl;
	}
	return 0;
}