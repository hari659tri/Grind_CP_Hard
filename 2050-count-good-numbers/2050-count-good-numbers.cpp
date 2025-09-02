class Solution {
public:

   int mod=1e9+7;

    int findPower(long long a,long long b){
        
      if(a==0) return 0;
        if(b==0||a==1) return 1;

         int result=1;

         while(b!=0){

            if(b%2){
               result= (result*a)%mod;
                b--;
            }
            else{
                a=(a*a)%mod;
                b=b/2;
            }

         }

        return result;
    } 
    int countGoodNumbers(long long n) {

      long long noOfOddPosition=n/2; 
      long long noOfEvenPosition=(n+1)/2;
      int  ans=((long long)(findPower(5,noOfEvenPosition))*(findPower(4,noOfOddPosition)))%mod;



         return ans;

    }
};