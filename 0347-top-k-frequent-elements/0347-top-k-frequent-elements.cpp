class Solution {
public:

     static bool cmp(pair<int,int>&a,pair<int,int>&b){
        
        return a.second>=b.second;
     }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // brute force approach

        unordered_map<int,int>mp;//O(N)
        int n=nums.size();

         for(int i=0;i<n;i++){
            mp[nums[i]]++;
         }
        // O(N)
    //      vector<pair<int,int>>vec;
    //      for(auto it:mp){
    //         vec.push_back({it.first,it.second});
    //      } ///O(N)

    //      sort(vec.begin(),vec.end(),cmp); //O(nlogn)

    //      vector<int>ans;
    //      for(int i=0;i<k;i++){
    //         ans.push_back(vec[i].first);
    //      }
      
    //    return ans;

       // time complexity O(NlogN)
       //space O(N)


       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            for(auto it:mp){
           pq.push({it.second,it.first});
           if(pq.size()>k) pq.pop();
         } 

         vector<int>ans;

         while(!pq.empty()){
           int a= pq.top().second;
          ans.push_back(a);
          pq.pop();
         }

         return ans;
         
    }
};