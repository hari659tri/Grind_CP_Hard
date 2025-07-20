class Solution {
public:
    int subarraySum(vector<int>& arr, int target) {
        unordered_map<int,int>mp;
         int n=arr.size();
         mp[0]=1;
        //  for(int i=1;i<n;i++){
        //      arr[i]=arr[i-1]+arr[i];
        //  }
         int cnt=0;
         int prefix=0;
         for(int i=0;i<n;i++){
            prefix+=arr[i];
             if(mp.find(prefix-target)!=mp.end()){
                 cnt+=mp[prefix-target];
             }
             mp[prefix]++;
         }
         
         
         return cnt;
    }
}; 