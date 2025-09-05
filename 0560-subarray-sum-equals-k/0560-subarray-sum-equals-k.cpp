class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp; //{sum,frequency}
        mp[0]=1;
        int cnt=0;
        int n=nums.size();
         int prefix=0;
        for(int i=0;i<n;i++){
         prefix=prefix+nums[i];
         if(mp.find(prefix-k)!=mp.end()){
            cnt+=mp[prefix-k];
         }
         
            mp[prefix]++;
         
        
        }
     
      return cnt;

    }
};