class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int left=0;
        int right=nums.size()-1;
        int pos=n-1;


        while(left<=right){

            if(abs(nums[left])>=abs(nums[right])){
              ans[pos--]=nums[left]*nums[left];
              left++;
            }
            else{
                ans[pos--]=nums[right]*nums[right];
                right--;
            }

        }

        return ans;
    }
};