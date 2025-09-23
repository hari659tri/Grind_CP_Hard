class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int ans=0;
        // int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     int fix=nums[i]-1;
        //     for(int j=i+1;j<n;j++){
        //         int var=nums[j]-1;
        //         ans=max(ans,fix*var);
              
        //     }
        // }
        // return ans;
        // time complexity O(N*N)

        // optimized it 
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int f1=nums[n-1]-1;
        int f2=nums[n-2]-1;

        return f1*f2;
         
         // time complexity is O(nlogn)
         //space is O(1)
    }
};