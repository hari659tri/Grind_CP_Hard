class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n=nums.size();

        for(auto it:nums){
            mp[it]++;
        }

        for(auto it:mp){

            int el=it.first;
            int cnt=it.second;

            if(cnt>n/2) 
              return el;

        }

   return -1;

    }
};