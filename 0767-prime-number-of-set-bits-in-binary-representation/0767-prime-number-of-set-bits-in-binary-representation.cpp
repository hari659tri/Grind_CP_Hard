class Solution {
public:  


    bool prime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;

        for(int i=3;i<=sqrt(n);i+=2){
           if(n%i==0) return false;
        }

        return true;
    } 
    
    int Countsetbit(int n){
        int cnt=0;
        while(n>=1){
          if(n%2==1) cnt++;
          n=n>>1;
        }

        return cnt;
    }
    int countPrimeSetBits(int left, int right) {
        
         int ans=0;

        for(int i=left;i<=right;i++){
             
             if(prime(Countsetbit(i))) ans++;

        }
        return ans;
    }
};