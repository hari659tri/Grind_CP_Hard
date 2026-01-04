class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      unordered_map<int,int>mp;
      int n=nums.size();
      for(int i=0;i<n;i++){
       mp[nums[i]]=i;
      }
       
       for(int i=0;i<nums.size();i++){
        int b=target-nums[i];
        if(mp.find(b)!=mp.end()&&mp[b]!=i){
            return {i,mp[b]};
        }

       }

      return {-1,-1};
      
    }
};