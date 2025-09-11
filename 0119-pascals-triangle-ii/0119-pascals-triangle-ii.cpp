class Solution {
public: 
     long long ncr(int n,int r){
        long long res=1;

          for(int i=0;i<r;i++){
            res*=(n-i);
            res/=(i+1);
          }

          return res;
     }
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
         vector<int>ans;

         int n=rowIndex+1;

          for(int i=1;i<=n;i++){
            ans.push_back(ncr(rowIndex,i-1));
          }

          return ans;

    }
};