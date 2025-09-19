class Solution {
public: 

    static bool cmp(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),cmp);
       vector<int>temp=intervals[0];
        int n=intervals.size();
        for(auto it=1;it<n;it++){
            if(intervals[it][0]<=temp[1]){
                temp[1]=max(temp[1],intervals[it][1]);
            }
            else{
                ans.push_back(temp);
                temp=intervals[it];
            }
        }
        
        ans.push_back(temp);

      return ans;
    }
};