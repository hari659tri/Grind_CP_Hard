class Solution {
public: 
  bool prime(int n){
    if(n<=1) return false;

    // check all even number case if it is a even or divisible by 2 then not prime
    if(n==2) return true;
    if(n%2==0) return false;

    
     // checking for all the odd number cases 
     for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
     }
     
      return true;
  }
    long long splitArray(vector<int>& nums) {
        
        long long suma=0;
        long long sumb=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(prime(i)){
              suma+=nums[i];
            }
            else{
              sumb+=nums[i];
            }
        }

        return abs(suma-sumb);
    }
};