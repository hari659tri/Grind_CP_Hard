class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        set<vector<int>>st;
          for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long>hs;
                for(int k=j+1;k<n;k++){
                 long long  sum=(long long)nums[i]+nums[j]+nums[k];
                 long long  fourth=target-sum;

                 if(hs.find(fourth)!=hs.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                 }
               hs.insert(nums[k]);
                }
            }
          }


        vector<vector<int>>ans(st.begin(),st.end());
       
          return ans;
    }
};