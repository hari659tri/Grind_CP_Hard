class Solution {
public:
    const int mod=1e9+7;
     bool prime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;

        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0) return false;
        }

        return true;
     }
      
     long long fact(int n){
        long long  fact=1;

         for(int i=2;i<=n;i++){
            fact=(fact*i)%mod;
         }

         return fact%mod;
     }

     int numPrimeArrangements(int n) {
           
           long long  primecount=0;
         for(int i=1;i<=n;i++){
            if(prime(i)){
                primecount++;
            }
         }

         long long  nonp=n-primecount;
      
         long long ans=(fact(primecount)*fact(nonp))%mod;

         return ans%mod;
    }
};