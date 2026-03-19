class Solution {
public: 
   
   void twosum(int a,int b,int k,int l,vector<vector<int>>&ans,vector<int>& nums,int target){
      
    while(k<l){
        long long sum=(long long)a+b+nums[k]+nums[l];

        if(sum==target){
           ans.push_back({a,b,nums[k],nums[l]});
            k++;
            l--;

            while(k<l&&nums[k]==nums[k-1]) 
              k++;

              while(k<l&&nums[l]==nums[l+1]) 
                l--;
        }
        else if(sum>target){
            l--;
        }
        else{
            k++;
        }
    }
   }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        int n=nums.size();
         sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])
            continue;
            int a=nums[i];
            for(int j=i+1;j<n;j++){
                if(j>i+1&&nums[j]==nums[j-1]) 
                    continue;
             int b=nums[j];
             int k=j+1;
             int l=n-1;
             twosum(a,b,k,l,ans,nums,target);
            }
        }

        return ans;

    }
};