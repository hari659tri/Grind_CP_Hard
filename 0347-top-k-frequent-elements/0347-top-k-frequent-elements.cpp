class Solution {
public:

     static bool cmp(pair<int,int>&a,pair<int,int>&b){
        
        return a.second>=b.second;
     }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // brute force approach

        unordered_map<int,int>mp;
        int n=nums.size();

         for(int i=0;i<n;i++){
            mp[nums[i]]++;
         }

         vector<pair<int,int>>vec;
         for(auto it:mp){
            vec.push_back({it.first,it.second});
         }

         sort(vec.begin(),vec.end(),cmp);

         vector<int>ans;
         for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
         }
      
       return ans;
    }
};