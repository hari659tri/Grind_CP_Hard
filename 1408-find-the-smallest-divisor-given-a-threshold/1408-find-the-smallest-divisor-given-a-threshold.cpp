class Solution {
public:

   int fun(vector<int>& nums,int threshold,int k){

      int n=nums.size();
    int sum=0;
        for(int i=0;i<n;i++){
          int s=(nums[i]+k-1)/k;
          sum+=s;
        }

        return sum;
   }

    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low=*min_element(nums.begin(),nums.end());
        int high=*max_element(nums.begin(),nums.end());
       
        while(low<=high){
            int mid=low+(high-low)/2;

            if(fun(nums,threshold,mid)<=threshold){
            high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};