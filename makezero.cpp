#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int total_xor = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_xor ^= a[i];
        }

        // If total XOR is not 0, it's impossible (but problem guarantees it is always possible)
        if (total_xor != 0) {
            cout << "NO\n";
            continue;
        }

        vector<pair<int, int>> ops;

        // First pass: operate on odd-indexed segments from the left
        for (int i = 1; i < n; i += 2) {
            ops.push_back({1, i + 1});
        }

        // Second pass: operate on odd-indexed segments from the right
        for (int i = 1; i < n - 1; i += 2) {
            ops.push_back({i + 1, n});
        }

        // Output
        cout << ops.size() << "\n";
        for (auto& op : ops) {
            cout << op.first << " " << op.second << "\n";
        }
    }

    return 0;
}
