class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n=nums.size();

        for(auto it:nums){
            mp[it]++;
        }

        for(auto it:mp){
            int a=it.second;
            if(a==1){
                return it.first;
            }
        }

        return -1;
    }
};