#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool valid(vector<int> &arr, long long exmax) {
        vector<long long>nums(arr.begin(),arr.end());
        
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > exmax) return false;
            long long diff = exmax - nums[i];
            long long next = (long long)nums[i + 1] - diff;
            nums[i + 1] = next;
        }
        return nums[n - 1] <= exmax;
    }

    int minimizeArrayValue(vector<int>& nums) {
        long long l = 0, h = *max_element(nums.begin(), nums.end()), ans = h;
        while (l <= h) {
            long long mid = l + (h - l) / 2;
            if (valid(nums, mid)) {
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
