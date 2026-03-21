class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        vector<int>ans;
        int ta=0;
        int tb=0;
        for(auto it:aliceSizes)
         ta+=it;

         for(auto it:bobSizes)
         tb+=it;
         
         int req=(ta-tb)/2;

         unordered_set<int>st;
         int n=aliceSizes.size();
         int m=bobSizes.size();
        
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ta-aliceSizes[i]+ bobSizes[j]==tb+aliceSizes[i]-bobSizes[j])
                  return {aliceSizes[i],bobSizes[j]};
            }
          }
         
    
    return {-1,-1};


    }
};