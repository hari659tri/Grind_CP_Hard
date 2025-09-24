class Solution {
public:
   
   static bool cmp(pair<int,int>&a, pair<int,int>&b){
     
        return a.first<b.first;
   }
    vector<int> arrayRankTransform(vector<int>& arr) {

        if(arr.empty()) return {};
        
        vector<pair<int,int>>vec;
        
          int n=arr.size();
           vector<int>ans(n,0);
          unordered_map<int,int>mp;
           for(int i=0;i<n;i++){
            vec.push_back({arr[i],i});
           }

           sort(vec.begin(),vec.end(),cmp);

            
           int rank=1;
           int track=vec[0].first;
           ans[vec[0].second]=rank;
            
           for(auto it:vec){
              
              if(track!=it.first){
                ans[it.second]=rank;
                track=it.first;
                rank++;
              }
              
              ans[it.second]=rank;
              
           


           }
           return ans;

    }
};