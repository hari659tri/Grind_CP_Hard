class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //brute force 
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-k];



       // priority_queue<int>pq;

    }
};