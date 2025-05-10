#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        long long total_apples = 0;
        long long min_apples = LLONG_MAX;
        long long max_apples = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_apples += a[i];
            min_apples = min(min_apples, a[i]);
            max_apples = max(max_apples, a[i]);
        }

       
        if (max_apples - min_apples > k) {
            cout << "Jerry\n";
            continue;
        }

        
        long long safe_moves = 0;
        for (int i = 0; i < n; i++) {
            safe_moves += a[i] - min_apples;
        }

      
        long long remaining_moves = total_apples - safe_moves;

    
        if (remaining_moves % 2 == 1) {
            cout << "Tom\n";
        } else {
            cout << "Jerry\n";
        }
    }

    return 0;
}
