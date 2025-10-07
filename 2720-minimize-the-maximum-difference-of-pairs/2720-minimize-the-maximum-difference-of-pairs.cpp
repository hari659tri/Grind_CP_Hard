class Solution {
public:
   int n;
     
     bool isvalid(vector<int>& nums,int p,int mid){
        int cnt=0;
        int i=0;
        while(i<n-1){
            if(abs(nums[i]-nums[i+1])<=mid){
                cnt++;
                i+=2;
            }
            else{
                i+=1;
            }
        }

        return cnt>=p;
     }
    int minimizeMax(vector<int>& nums, int p) {
        n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums[n-1]-nums[0];
        int ans=0;

        while(low<=high){
            int mid=low+(high-low)/2;
        if(isvalid(nums,p,mid)){
         ans=mid;
         high=mid-1;
        }
        else{
           low=mid+1;
        }

        }
         
         return ans;
    }
};