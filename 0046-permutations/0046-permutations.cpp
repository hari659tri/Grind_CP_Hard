class Solution {
public:
  vector<vector<int>>ans;
   unordered_set<int>st;

   void solve(vector<int>& nums,int n,vector<int>&temp){
       
       if(temp.size()==n){
        ans.push_back(temp);
        return;
       }

       for(int i=0;i<n;i++){
        if(st.find(nums[i])==st.end()){
            temp.push_back(nums[i]);
            st.insert(nums[i]);
            solve(nums,n,temp);
            temp.pop_back();
            st.erase(nums[i]);
        }
       }
   }
    vector<vector<int>> permute(vector<int>& nums) {
         
         int n=nums.size();
         vector<int>temp;
        solve(nums,n,temp);
         
         return ans;

    }
};