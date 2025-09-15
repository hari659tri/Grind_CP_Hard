class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

       
         unordered_set<int>st;
         unordered_map<int,int>mp;
         for(auto it:nums){
            mp[it]++;
            if(mp[it]>n/3){
                st.insert(it);
            }
         }
           vector<int>ans(st.begin(),st.end());

         return ans;
    }
};