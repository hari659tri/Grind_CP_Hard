class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0;
        long long sum=0;
        unordered_set<int>st;


        int left=0;
        for(int right=0;right<nums.size();right++){

            while(st.find(nums[right])!=st.end()||st.size()==k){
                st.erase(nums[left]);
                sum-=nums[left];
                left++;

            }
            sum+=nums[right];
            st.insert(nums[right]);

            if(st.size()==k){
             ans=max(ans,sum);
            }

        }
        return ans;
    }
};