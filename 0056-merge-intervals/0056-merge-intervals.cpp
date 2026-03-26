class Solution {
public: 
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
          sort(intervals.begin(),intervals.end(),cmp);
        
        vector<int>temp=intervals[0];

        for(int i=1;i<n;i++){

            if(intervals[i][0]<=temp[1]){
               temp[1]=max(temp[1],intervals[i][1]);
            }
            else{
                ans.push_back(temp);
                temp=intervals[i];
            }
        }
      
          
          ans.push_back(temp);

          return ans;


    }
};