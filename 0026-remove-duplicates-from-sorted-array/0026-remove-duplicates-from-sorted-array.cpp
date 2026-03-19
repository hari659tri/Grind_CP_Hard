class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();

        while(i<n-1&&j<n){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            else{
                j++;
            }
        }

        return i+1;
    }
};