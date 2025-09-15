class Solution {
public: 
    void reverserArray(vector<int>&nums,int s,int e){
        while(s<e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        // fully optimized approach 
      // full reverse the array 
      if(k>nums.size())
      k=k%nums.size();
      reverserArray(nums,0,nums.size()-1);
      reverserArray(nums,0,k-1);
      reverserArray(nums,k,nums.size()-1);

    }
};