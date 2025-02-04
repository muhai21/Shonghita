#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    
		int m = n;
		vector <int> a, b;
		for(int i = 0; i < m; i++) {
		    int x;
		    cin >> x;
		    a.push_back(x);
		}
        for(int i = 0; i < m; i++) {
		    int x;
		    cin >> x;
		    b.push_back(x);
		}
        
        int r = 0;
        for(int i = 0; i < m -1; i++) {
            if(a[i] > b[i + 1]) r += a[i] - b[i +1];
        }
        r += a[m -1];
        
        cout << r << endl;

	}
	return 0;
}