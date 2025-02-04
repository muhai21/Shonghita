#include<bits/stdc++.h>
using namespace std;

int fib(int a1, int a2, int a4, int a5) {
    vector <int> v = {
        a1+a2, a4-a2, a5-a4
    };
    int maxc = 0;
    
    for(auto a3 : v) {
        int count = 0;
        if(a3 == a1 + a2) count++;
        if(a4 == a3 + a2) count++;
        if(a5 == a4 + a3) count++;
        maxc = max(maxc, count);
    }
return maxc;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        cout << fib(a1, a2, a4, a5) << endl;
    }

    return 0;
}
