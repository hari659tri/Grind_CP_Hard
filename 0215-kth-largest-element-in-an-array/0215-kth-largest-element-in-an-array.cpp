class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //brute force 
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return nums[n-k];
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
        }

     return pq.top();


    }
};