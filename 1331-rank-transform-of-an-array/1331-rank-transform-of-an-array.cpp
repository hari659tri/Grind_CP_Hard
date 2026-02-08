class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans=arr;
        sort(arr.begin(),arr.end());

        unordered_map<int,int>mp;
        int r=0;
        int n=arr.size();
        for(auto it:arr){
            if(mp.find(it)==mp.end()) r++;
             mp[it]=r;
        }

        for(int i=0;i<n;i++){
            ans[i]=mp[ans[i]];
        
        
        }

        return ans;
    }
};