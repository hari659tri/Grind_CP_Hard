class Solution {
public:
      vector<string>ans;
     
    
     void solve(string s,int n,int idx, string &temp){
        if(idx==n){
            ans.push_back(temp);
            return;
        }
       if(idx>=n) return;
        if(isdigit(s[idx])){
            temp+=s[idx];
            solve(s,n,idx+1,temp);
            temp.pop_back();
        }
        
        if(isalpha(s[idx])){

            temp+=toupper(s[idx]); 
            solve(s,n,idx+1,temp);
            temp.pop_back();
            temp+=tolower(s[idx]);
            solve(s,n,idx+1,temp);
            temp.pop_back();
           
        }
        
          

     }
    vector<string> letterCasePermutation(string s) {
        int n=s.size();
         string temp;
        solve(s,n,0,temp);

        return ans;

    }
};