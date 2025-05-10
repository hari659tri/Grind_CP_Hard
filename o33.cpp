#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        if (n == 1) {
            if (x == 0) cout << -1 << endl;
            else cout << x << endl;
        } 
        else if (n == 2) {
            if (x == 0) cout << 2 << endl;
            else if (x == 1) cout << 5 << endl; // [2,3]
            else cout << x + 2 << endl; // [1, x^1]
        } 
        else {
            long long xor_prefix = (n - 3) % 2;
            long long a = 2, b = 3;
            long long c = x ^ xor_prefix ^ a ^ b;
            // Now total XOR: (n-3) of 1s + a + b + c == x
            long long sum = (n - 3) * 1 + a + b + c;
            cout << sum << endl;
        }
    }
    return 0;
}