class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[n-1];
        int b=nums[n-2];
        int c=nums[n-3];

        int s1=nums[0];
        int s2=nums[1];
      
       return max((a*b*c),s1*s2*a);
    }
};