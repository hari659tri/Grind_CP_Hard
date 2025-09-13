class Solution {
public:
  unordered_set<string>st;
  vector<int>dp;

 
  int n;
     bool fun(string&s,int idx){
       if(idx==n) return  dp[idx]=true;

       if(st.find(s)!=st.end()) return dp[idx]=true;
       if(dp[idx]!=-1) return dp[idx];
       for(int l=1;l<=n;l++){
        string temp=s.substr(idx,l);
        if(st.find(temp)!=st.end()&&fun(s,idx+l)){
            return dp[idx]= true;
        }
       }

       return dp[idx]=false;
     }
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.size();
//          for(int i=0;i<301;i++){
//          dp[i]=-1;
//   }

        dp.assign(301,-1);

        for(auto it:wordDict){
            st.insert(it);

        }

        return fun(s,0);
    }
};