class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans;

        for(int i=0;i<2;i++){
            for(int i=0;i<n;i++){
                ans.push_back(nums[i]);
            }
        }

        return  ans;


        // time complexity of this code will be O(n)...
        // space complexity of this code will be  O(2*n)...
        
    }
};