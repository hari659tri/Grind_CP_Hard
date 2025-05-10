#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<int> f(10, 0);
        for(auto it : s){
            f[it - '0']++;
        }

        string ans = "";

        for(int i = 0; i < 10; i++){
            int minrequired = 9 - i;
            for(int d = minrequired; d < 10; d++){  
                if(f[d] > 0){
                    ans += (d + '0');
                    f[d]--;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
