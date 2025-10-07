class Solution {
public:
    int bs(int i,int target,vector<int>& nums2){
        int h=nums2.size()-1;
        int l=i;
        int ans=-1;
         
         while(l<=h){
            int mid=l+(h-l)/2;

            if(nums2[mid]>=target){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
         }

         return ans;
    }
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            int j=bs(i,nums1[i],nums2);
            if(j!=-1){
                maxi=max(maxi,j-i);
            }
        }

        return maxi;
    }
};