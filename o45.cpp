#include <iostream>
#include <vector>
#include <numeric> // for std::gcd
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool f = false;

    
        for (int i = 1; i < n; ++i) {
            // Group B: first i elements
            // Group C: rest
            int gcdB = a[0];
            for (int j = 1; j < i; ++j)
                gcdB = gcd(gcdB, a[j]);

            int gcdC = a[i];
            for (int j = i + 1; j < n; ++j)
                gcdC = gcd(gcdC, a[j]);

            if (gcdB != gcdC) {
                cout << "Yes\n";
                for (int j = 0; j < n; ++j)
                    cout << (j < i ? 1 : 2) << " ";
                cout << "\n";
                f = true;
                break;
            }
        }

        if (!f)
            cout << "No\n";
    }

    return 0;
}
