class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // count the maximum frequency

        unordered_map<int,int>mp;
        int maxifreq=0;
         for(auto it:nums){
            mp[it]++;
            maxifreq=max(maxifreq,mp[it]);
         }
       
         int ans=0;
         for(auto &it:mp){
          if(it.second==maxifreq){
            ans+=maxifreq;
          }
         }

         return ans;
    }
};