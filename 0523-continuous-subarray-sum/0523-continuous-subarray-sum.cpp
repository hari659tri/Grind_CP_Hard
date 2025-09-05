class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp; //{key:remender,value:sum by dividing it by k}
        mp[0]=-1;
        int prefixsum=0;
        int n=nums.size();

        for(int i=0;i<n;i++){

            prefixsum+=nums[i];
            int rem = prefixsum % k;
            if(rem<0) rem+=k;
            if(mp.find(rem)!=mp.end()){
                if((i-mp[rem])>=2)
                   return true;
            }
            else
            mp[rem]=i;
        }

        return false;

    }
};