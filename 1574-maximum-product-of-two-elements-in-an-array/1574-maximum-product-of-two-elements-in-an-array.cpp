class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int fix=nums[i]-1;
            for(int j=i+1;j<n;j++){
                int var=nums[j]-1;
                ans=max(ans,fix*var);
              
            }
        }
        return ans;
    }
};