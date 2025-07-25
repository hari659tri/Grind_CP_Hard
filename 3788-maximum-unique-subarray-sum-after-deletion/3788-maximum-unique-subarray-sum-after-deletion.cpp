class Solution {
public:
    int maxSum(vector<int>& nums) {
        
        bool allneg=true;
        unordered_set<int>st(nums.begin(),nums.end());
        int maxval=INT_MIN;
        for(int it:st){
            if(it>=0){
                allneg=false;
            }

            maxval=max(maxval,it);
        }

        if(allneg)  return maxval;

        maxval=INT_MIN;
        int sum=0;
        for(auto it:st){
            if(it>=0)
            sum=sum+it;
            maxval=max(maxval,sum);

        }
        return maxval;
    }
};