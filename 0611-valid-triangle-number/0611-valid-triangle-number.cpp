class Solution {
public:  
     int solve(vector<int>& nums,int low,int high,int target){

        int k=-1;

        while(low<=high){

            int  mid=(low+(high-low)/2);

            if(nums[mid]<target){
                k=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }

        return k;
     }
    int triangleNumber(vector<int>& nums) {
        
        int n=nums.size();

        if(n<3)  return 0;
        int ans=0;
        // if any side is zero not possible to make a triangle
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
             if(nums[i]==0) continue;
            for(int j=i+1;j<n;j++){

                if(nums[j]==0) continue;
               int target=nums[i]+nums[j];
               int k=solve(nums,j+1,n-1,target);

               if(k!=-1){
               ans+=(k-j);
               }
            }
           
            
        }

        return ans;
    }
};