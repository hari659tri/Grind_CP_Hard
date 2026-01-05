class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int>st1(nums1.begin(),nums1.end());
        unordered_set<int>st2(nums2.begin(),nums2.end());
         vector<int>ans;
        for(auto it:st1){
            if(st2.find(it)!=st2.end()){
                ans.push_back(it);
            }
        }
        
       return ans;

    }
};