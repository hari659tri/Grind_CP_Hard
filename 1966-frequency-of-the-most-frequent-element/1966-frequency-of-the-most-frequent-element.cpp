class Solution {
public:
     int bs(int tidx,vector<int>& nums,int k,vector<long>&prefix){

      int low=0;
      int high=tidx;
     int ans=0;
         while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=tidx-mid+1;
            long long  windowSum=(long long)cnt*nums[tidx];

          
            long long  orgsum= (mid!=0?(prefix[tidx]-prefix[mid-1]):prefix[tidx]);

             long long ops=windowSum-orgsum;

             if(ops>k){
               low=mid+1;
             }
             else{
                ans=mid;
                high=mid-1;
             }
            

         }
         return tidx-ans+1;
     }

    int maxFrequency(vector<int>& nums, int k) {
        
       int n=nums.size();
       sort(nums.begin(),nums.end());
        vector<long>prefix(n,0);
        prefix[0]=nums[0];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int ans=0;

        for(int i=0;i<n;i++){
          int freq=bs(i,nums,k,prefix);
          ans=max(ans,freq);
        }


        return ans;
    
    }
};