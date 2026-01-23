class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,bool>mp;
        for(auto it:nums){
            if(mp.find(it)!=mp.end()){
                return it;
            }

            mp[it]=true;
        }

        return -1;
    }
};