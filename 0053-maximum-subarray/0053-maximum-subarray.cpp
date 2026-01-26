class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        int maxi=INT_MIN;

        for(int o=0;o<n;o++){
            sum+=nums[o];
            maxi=max(sum,maxi);

            if(sum<0){
                sum=0;   // I discard it because it can only reduce the current sum
            }
        }

        return maxi;
        // time complexity O(n)
        //space complexity O(1)
    }
};