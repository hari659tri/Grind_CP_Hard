class Solution {
public: 
    unordered_map<char,string>mp;

    void solve(vector<string>&ans,string temp,int idx,int n,string digits){
      
       if(idx==n){
        ans.push_back(temp);
        return;
       }
      
      string s=mp[digits[idx]];

      for(int i=0;i<s.size();i++){
        temp.push_back(s[i]);
        solve(ans,temp,idx+1,n,digits);
        temp.pop_back();

      }

    }
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        int n=digits.size();
        int idx=0;
        string temp;
        solve(ans,temp,idx,n,digits);

        return ans;
    }
};