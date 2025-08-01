class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int low=0;
        int high=nums.size()-1;
        int ans=INT_MIN;
        while(low<high){

            int curr=nums[low]+nums[high];

            ans=max(ans,curr);
            low++;
            high--;
        }

        return ans;
    }
};