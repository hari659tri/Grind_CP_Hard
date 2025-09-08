class Solution {
public: 

    static bool cmp(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),cmp);
       vector<int>temp=intervals[0];

        for(auto it:intervals){
            if(it[0]<=temp[1]){
                temp[1]=max(temp[1],it[1]);
            }
            else{
                ans.push_back(temp);
                temp=it;
            }
        }
        
        ans.push_back(temp);

      return ans;
    }
};