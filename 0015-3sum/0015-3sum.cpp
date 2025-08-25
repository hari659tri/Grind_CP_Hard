class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
      // set<vector<int>>st;
 
       // brute force time complexity O(n^3)
    //    for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){

    //             if(nums[i]+nums[j]+nums[k]==0){
    //                 vector<int>temp={nums[i],nums[j],nums[k]};
    //                 sort(nums.begin(),nums.end());
    //                 st.insert(temp);

    //             }
    //         }
    //     }
    //    }

    // time complexity --->O(n^2log(m)) which give tle also 
  
    //     for(int i=0;i<n;i++){
    //         set<int>hs;
    //         for(int j=i+1;j<n;j++){
    //          int third=-(nums[i]+nums[j]);
    //          if(hs.find(third)!=hs.end()){
    //             vector<int>temp={nums[i],nums[j],third};
    //             sort(temp.begin(),temp.end());

    //             st.insert(temp);
    //          }

    //             hs.insert(nums[j]);
    //         }
    //     }





    //  vector<vector<int>> ans(st.begin(),st.end());
    //  return ans;

       
      
        int n=nums.size();
        
           vector<vector<int>> ans;
            sort(nums.begin(),nums.end());

           for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;


            int j=i+1;
            int k=n-1;

             while(j<k){
               
               int sum=nums[i]+nums[j]+nums[k];

               if(sum<0){
                j++;

               }
               else if(sum>0){
                  k--;
               }
               else{
                vector<int>temp={nums[i],nums[j],nums[k]};
                j++;
                k--;
                ans.push_back(temp);
               
                while(j<k&&nums[j]==nums[j-1]) j++;
                while(k>j&&nums[k]==nums[k+1]) k--;
               }


             }
           }
       

       return ans;

    }
};