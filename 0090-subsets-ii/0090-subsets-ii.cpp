class Solution {
public:  
  void solve(vector<int>& nums,vector<vector<int>>&ans,int idx,int n,vector<int>&temp){

    
         ans.push_back(temp);
         
    
  

    for(int i=idx;i<n;i++){
        if(i>idx&&nums[i]==nums[i-1])
          continue;

          temp.push_back(nums[i]);
          solve(nums,ans,i+1,n,temp);
          temp.pop_back();
    } 

  }
     
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
         vector<vector<int>>ans;
          vector<int>temp;
        int n=nums.size();
        solve(nums,ans,0,n,temp);


        return ans;
    }
};