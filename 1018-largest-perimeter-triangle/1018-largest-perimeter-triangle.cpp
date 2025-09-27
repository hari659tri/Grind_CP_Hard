class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),greater<int>());

        int maxi=INT_MIN;

         for(int i=0;i<nums.size()-2;i++){
            if(nums[i+2]+nums[i+1]>nums[i]){
                return (nums[i]+nums[i+1]+nums[i+2]);
            }
         }

         return 0;
         // time complexity is O(nlogn)



         /*
         A triangle is valid if the triangle inequality holds:
         a+b>c,b+c>a,a+c>b
         If a + b > c, the triangle is valid and has non-zero area.
         If a + b = c, it is degenerate (zero area)
         If a + b < c, no triangle is possible.

         */

    }
};