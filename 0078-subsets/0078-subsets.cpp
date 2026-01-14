class Solution {
public:
// time complexity is O(2^n)
//space complexity(Auxilary space space due to stack) is:O(n)
// total nuber of subset is 2^n....
 
  void solve(vector<int>& nums,vector<vector<int>>&ans,int idx,int n,vector<int>&temp){

    if(idx==n){
        ans.push_back(temp);
        return;
    }

    // take part
    temp.push_back(nums[idx]);
    solve(nums,ans,idx+1,n,temp);
    // not take part this is backtracking 
    temp.pop_back();
    solve(nums,ans,idx+1,n,temp);
    
     return;

  }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        solve(nums,ans,0,n,temp);


        return ans;

    }
};