class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        int maxidx=0;
        for(int i=0;i<n;i++){
            if(i>maxidx) return false;

            maxidx=max(maxidx,nums[i]+i);
        }

        return true;
    }
};