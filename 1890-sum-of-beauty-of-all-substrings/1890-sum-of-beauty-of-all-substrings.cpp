class Solution {
public:
    int beautySum(string s) {
        
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
             mp[s[j]]++;
              int maxi=-2*1e9;
              int mini=2*1e9;
             if(j-i+1>=2){
                for(auto it:mp){
                 maxi=max(maxi,it.second);
                 mini=min(mini,it.second);
                }
                  ans+=(maxi-mini);
             }
           
            }
        }
        return ans;
    }
};