class Solution {
public:  
   
   void twosum(int n1,vector<int>& nums,int j,int k,int target,int&ans){
    
      while(j<k){
        int sum=n1+nums[j]+nums[k];
        
        if(abs(target-sum)<abs(target-ans)){
            ans=sum;
        }
        else if(sum>target){
           k--;
        }
        else
        j++;
      }
   }

    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=1e4;

        for(int i=0;i<n;i++){
            int n1=nums[i];

            int j=i+1;
            int k=n-1;
            twosum(n1,nums,j,k,target,ans);
        }

        return ans==1e4?0:ans;


        //time complexity is O(n^2)
        //space complexity is O(1)
    }
};