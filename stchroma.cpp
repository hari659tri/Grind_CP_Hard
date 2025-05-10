#include<bits/stdc++.h>
#define ll long long ;
#define ld long double;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> per;
        
        for (int val = 0; val < x;val++) {
            per.push_back(val);
        }
        
        for (int i = x + 1; i < n; i++) {
            per.push_back(i);
        }

        per.push_back(x);

        for (int i = 0; i < n; ++i) {
            cout << per[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
