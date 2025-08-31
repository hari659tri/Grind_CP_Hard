class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0, sum = 0;
        unordered_set<int> st;

        int i = 0;
        for (int j = 0; j < n; j++) {
            // If duplicate found, shrink window
            while (st.find(nums[j]) != st.end()) {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            // Add current element
            st.insert(nums[j]);
            sum += nums[j];

            // If window size exceeds k, shrink from left
            if (st.size() > k) {
                st.erase(nums[i]);
                sum -= nums[i];
                i++;
            }

            // If valid window of size k, update answer
            if (st.size() == k) {
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
