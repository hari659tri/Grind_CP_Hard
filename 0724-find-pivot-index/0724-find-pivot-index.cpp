class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=accumulate(nums.begin(),nums.end(),0);

        int leftSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
          int rightSum=totalSum-leftSum-nums[i];

          if(leftSum==rightSum){
            return i;
          }

          leftSum=leftSum+nums[i];
        }

        return -1;
    }
};