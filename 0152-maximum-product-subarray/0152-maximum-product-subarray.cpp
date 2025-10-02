class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=i;j<n;j++){
              prod*=nums[j];
              maxi=max(maxi,prod);
            }
        }

        return maxi;

        //  time complexity is O(N^2)

    }
};