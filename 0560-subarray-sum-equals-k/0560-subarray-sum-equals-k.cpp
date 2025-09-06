class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp; // {sum,frequency } k 
        mp[0]=1;  // edge case important 

        int ans=0;

        // running sum
        int  n=nums.size();
        int pre=0;
        for(int i=0;i<n;i++){
            pre=pre+nums[i];
          
          if(mp.find(pre-k)!=mp.end()){
             ans+=mp[pre-k];
          }

            mp[pre]++;

        } 
  
       
       return ans;

    }
};