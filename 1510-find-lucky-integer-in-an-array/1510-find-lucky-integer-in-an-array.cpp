class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for (int num : arr) {
            mp[num]++;
        }

        int ans = -1;

        // Step 2: Check lucky integers
        for (auto& it : mp) {
            if (it.first == it.second) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};
