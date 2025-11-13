#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isdigitStr(string a) {
        return a.size() == 1 && isdigit(a[0]);
    }

    string decodeString(string s) {
        stack<string> st;

        for (char ch : s) {
            if (ch != ']') {
                st.push(string(1, ch)); // ✅ push actual character
            } else {
                string str = "";
                while (!st.empty() && st.top() != "[") {
                    str = st.top() + str;
                    st.pop();
                }

                if (!st.empty() && st.top() == "[")
                    st.pop();

                string k = "";
                while (!st.empty() && isdigitStr(st.top())) {
                    k = st.top() + k;
                    st.pop();
                }

                int m = stoi(k);
                string res = "";
                while (m--) res += str;
                st.push(res);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
