class Solution {
public:

   void solve(vector<vector<int>>& ans,vector<int>ds,vector<int>&arr,int idx,int target){

       //base case
       if(target<0) return;
       if(idx==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
       }
       //call for the pick 
       if(arr[idx]<=target){
        ds.push_back(arr[idx]);
        solve(ans,ds,arr,idx,target-arr[idx]);// it is the case where you choose the any number unlimited number of times so due to this you do not do the idx+1 so it is case you remember it....when ever anything supply takes places unlimited number of times then you not do idx+1
        ds.pop_back(); //here you pop_back if passed by refernces else not pop_back....
       }
       solve(ans,ds,arr,idx+1,target); // not pick call so no nedd to the reduce the target

   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int>ds;
        int idx=0;
         solve(ans,ds,candidates,idx,target);
          return ans;

     // time complexity will be exponential  
    } 
};