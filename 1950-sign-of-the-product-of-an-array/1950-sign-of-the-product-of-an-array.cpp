class Solution {
public: 
   int signFunc(long long x){
       
         if(x>0) return 1;
         else if(x<0) return -1;
         
         return 0;
   }
    int arraySign(vector<int>& nums) {
        
        long long product=1;
        for(auto it:nums){
            if(product>=INT_MAX) product=1;
            if(product<=INT_MIN)product=-1;
            product=product*it;
            
        }
  
      return signFunc(product);

    }
};