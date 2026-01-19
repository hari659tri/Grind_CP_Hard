class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void solve(vector<int>& candidates,int t,int idx){
     
       if(t==0){
        ans.push_back(path);
        return;
       }

       if(t<0) 
         return;

       for(int i=idx;i<candidates.size();i++){

        path.push_back(candidates[i]);
        solve(candidates,t-candidates[i],i);
        path.pop_back();
       }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        solve(candidates,target,0);
        return ans;
    }
};