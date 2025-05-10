#include<bits/stdc++.h>
using namespace std;


vector<int> precompute(int max_n) {
    vector<int> res(max_n + 1);
    for (int n = 1; n <= max_n; n++) {
        int max_f = 0;
        for (int i = 1; i <= n; i++) {
            max_f += abs((n - i + 1) - i);  
        }
        res[n] = (max_f / 2) + 1; 
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    vector<int> queries(t);
    int max_n = 0;

    for (int i = 0; i < t; ++i) {
        cin >> queries[i];
        max_n = max(max_n, queries[i]);
    }

    vector<int> answers = precompute(max_n);

    for (int i = 0; i < t; i++) {
        cout << answers[queries[i]] << endl;
    }

    return 0;
}
