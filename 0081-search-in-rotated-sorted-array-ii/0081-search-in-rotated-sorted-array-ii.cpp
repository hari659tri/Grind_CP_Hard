class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.size() == 1) {
            return nums[0] == target;
        }
        
        int s = 0;
        int e = nums.size() - 1;
        int mid;

        while (s <= e) {
            mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (nums[mid] == nums[s]&&nums[mid]==nums[e]) {
                // Handle the case where nums[mid] == nums[s]
                s++; // Move to the next element
                e--;
                continue;
            }

           else if (nums[mid] >= nums[s]) {
                if (target >= nums[s] && target <=nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            } else {
                if (target >= nums[mid] && target <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }

        return false;
    }
};