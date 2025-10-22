class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_set<char>st;
        int n=s.size();
         
         for(int i=0;i<n;i++){

          if(st.find(s[i])!=st.end()) return s[i];

            st.insert(s[i]);
         }

         return ' ';
    }
};