class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);

        string word;
       vector<string>st;
        while(ss>>word){
            st.push_back(word);
        }

        reverse(st.begin(),st.end());
      string ans="";
        for(auto it:st){
            ans+=it;
            ans+=" ";
        }

        return ans.substr(0,ans.size()-1);

    }
};