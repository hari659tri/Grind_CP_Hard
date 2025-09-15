class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int cnt=1;
        int n=nums.size();
        if(n==1) return 1;
         int i=0;
         int j=1;

         while(j<n){
            
            if(i<n&&nums[i]!=nums[j]){
               i++;
               nums[i]=nums[j];
               cnt++;
            }
            j++;
         }

         
       return cnt;
    } 
};