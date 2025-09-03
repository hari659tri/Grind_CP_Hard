class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int i = 0;
        int j=0;
        int n = s.size();
        if(n==1) return 1;
        unordered_set<char> st;

        while(j<n){
            
            while (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            }

            st.insert(s[j]);
            j++;
            maxLen=max(maxLen,j-i);
        }

        return maxLen;
    }
};