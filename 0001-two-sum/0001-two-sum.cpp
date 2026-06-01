class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int  n=nums.size();
        unordered_map<int,int>mp;

      
        
        for(auto it=0;it<n;it++){
            int b=target-nums[it];
            
            if(mp.find(b)!=mp.end()&&it!=mp[b]){
                return {it,mp[b]};
            }
            else
            mp[nums[it]]=it;
        }

        return {-1, -1};
        }
};