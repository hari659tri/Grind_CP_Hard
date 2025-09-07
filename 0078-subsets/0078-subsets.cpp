class Solution {
public:  

void solve(int idx, vector<vector<int>>&ans,vector<int>&temp,vector<int>& nums){
     if(idx>nums.size()) return;
    if(idx==nums.size()){
        ans.push_back(temp);

        return;
    }
   
     temp.push_back(nums[idx]);

     solve(idx+1,ans,temp,nums);

     temp.pop_back() ;  // backtrack the previous states 

     solve(idx+1,ans,temp,nums);
    




}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int idx=0;
        vector<int>temp;

        solve(0,ans,temp,nums);
         
          return ans;
    }
};