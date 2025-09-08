class Solution {
public:
    
    void solve(vector<vector<int>>&ans, vector<int>&temp,int n,int idx,vector<int>& candidates,int target){ 

        


        if(idx==n){
            if(target==0){
                ans.push_back(temp);
            }

            return;
        }

        if(target==0){
            ans.push_back(temp);
            return;
        }

           
           if(candidates[idx]<=target){
            temp.push_back(candidates[idx]);
          solve(ans,temp,n,idx,candidates,target-candidates[idx]);
          temp.pop_back();
           } 


        solve(ans,temp,n,idx+1,candidates,target);
         



    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n=candidates.size();
         vector<vector<int>>ans;
         vector<int>temp;
        int idx=0;
        solve(ans,temp,n,idx,candidates,target); 

         return ans;
    }
};