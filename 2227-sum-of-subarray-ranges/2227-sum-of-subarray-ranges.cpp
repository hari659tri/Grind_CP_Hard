class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
       long long sum=0;

       int n=nums.size();

       for(int i=0;i<n;i++){
         int mini=nums[i];
         int maxi=nums[i];
         for(int j=i+1;j<n;j++){
            mini=min(mini,nums[j]);
            maxi=max(maxi,nums[j]);
            sum=sum+(maxi-mini);


         }
       }

      return sum;
    }
};