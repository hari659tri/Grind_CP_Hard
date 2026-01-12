class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto it:nums){
            mp[it]++;
        }

        for(auto it:mp){
            int x=it.second;
            if(x>1) return it.first;
        }

        return -1;

    }
};