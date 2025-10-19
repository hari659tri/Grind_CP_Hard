class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans=0;
        int lcnt=0;
        int rcnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='R') rcnt++;
            else if(s[i]=='L') lcnt++;
            if(rcnt==lcnt) ans++;

        }

        return ans;
    }
};