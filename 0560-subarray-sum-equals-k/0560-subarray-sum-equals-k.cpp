class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        // int cnt=0;
        // int n=nums.size();

        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int m=i;m<=j;m++){
        //             sum+=nums[m];
        //         }
        //         if(sum==k) 
        //         cnt++;
        //     }
        // }

        // return cnt;

        unordered_map<int,int>mp; //{sum,count}
        mp[0]=1;  
        int n=nums.size();
        int cumSum=0;
        int ans=0;

        for(int i=0;i<n;i++){
           cumSum+=nums[i];
           if(mp.find(cumSum-k)!=mp.end()){
            ans+=mp[cumSum-k];
           }  
           mp[cumSum]++;
        }

        return ans;
    }
};