class Solution {
public:
     vector<vector<int>>ans;
     vector<int>temp;
      
      void solve(vector<int>& candidates,int target,int idx,int n){

        if(target==0){
            ans.push_back(temp);
            return;
        }

        if(target<0) 
           return;

           for(int i=idx;i<n;i++){

            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i+1,n);
            temp.pop_back();
           }
      }
     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

          sort(candidates.begin(),candidates.end());
         int idx=0;
         int n=candidates.size();

         solve(candidates,target,idx,n);
         return ans;
    }
};