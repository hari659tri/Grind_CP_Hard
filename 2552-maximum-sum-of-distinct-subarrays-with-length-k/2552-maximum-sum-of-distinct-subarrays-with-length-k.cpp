class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // brute force....
    //     int n=nums.size();
    //     int maxi=0;
         
    //     for(int i=0;i<=n-k;i++){
    //         unordered_set<int>st;
    //      int sum=0;
            
    //         for(int j=i;j<k+i;j++){
    //             if(st.find(nums[j])!=st.end()){
    //                 break;
    //             }

    //          st.insert(nums[j]);
    //          sum+=nums[j];
              
                 
    //         }
    //         if(st.size()==k){
    //             maxi=max(maxi,sum);
    //         }

           
    //     }

    //    return maxi;
    // time complexity-->O(n*k)
    // space complexity O(k)



    // optimized code 
    int n=nums.size();
    unordered_set<int>st;
    long long maxi=0;
    long long  sum=0;
    int j=0; // starting pointer 

     for(int i=0;i<n;i++){
      
      while(j<n&&st.find(nums[i])!=st.end()||st.size()==k){
        sum-=nums[j];
        st.erase(nums[j]);
        j++;

      }

      sum+=nums[i];
      st.insert(nums[i]);
      if(st.size()==k){
        maxi=max(maxi,sum);
      }
   
      
     }
      

       return maxi;

    }
};