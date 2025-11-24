class Solution {
public:
    string clearDigits(string s) {
        string ans="";
        
        int n=s.size();
        for(int i=0;i<n;i++){
          
            if(isdigit(s[i])&&!ans.empty()){
               ans.pop_back();
            }
            else{
                ans+=s[i];
            }
            
        }

        return ans;
    }
};