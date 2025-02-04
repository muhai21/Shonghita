#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> x(n);
        vector<int> freq(n + 1, 0);
        
        for(int i = 0; i < n; ++i) {
            cin >> x[i];
            freq[x[i]]++;
        }
        
        int score = 0;
        
        for(int i = 1; i <= n; ++i) {
            int j = k - i;
            
            if(j >= 1&& j <= n && i <= j) {
                if(i == j) score += freq[i] / 2;
                else score += min(freq[i], freq[j]);
            }
        }
        
        cout << score << endl;
    }
    return 0;
}
