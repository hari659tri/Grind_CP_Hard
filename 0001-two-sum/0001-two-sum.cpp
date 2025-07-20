class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // method 1-->> bruteforce 
        
        // track the indices in a orginal array
        unordered_map<int,int>mp;
         int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         mp[nums[i]]=i;
    //     }
       
    //     sort(nums.begin(),nums.end());
    //    // this sort work if asked sum exist or not 
   
         
    //     vector<int>ans;
      
    //   int i=0;
    //   int j=n-1;
    //     while(i<j){
    //         if(nums[i]+nums[j]==target){
    //        return {mp[nums[i]],mp[nums[j]]};
    //         }
    //         else if(nums[i]+nums[j]>target){
    //          j--;
    //         }
    //         else{
    //             i++;
    //         }
        //}
         for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
     
        for(int i=0;i<n;i++){
           int serch=target-nums[i];

           if(mp.count(serch)&&mp[serch]!=i){
            return {mp[serch],i};
           }
        }


        return {-1,-1};
    }
};