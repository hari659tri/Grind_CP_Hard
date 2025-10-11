class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int n=grades.size();
        int sq=sqrt(1+8*n);
        int ans=(sq-1)/2;

        return ans;

    }
};