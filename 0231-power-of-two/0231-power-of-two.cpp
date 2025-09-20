class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        long long k=abs(n);
        if(n==0) return false;
        if(n==1) return true;
        while(k!=0){
            if(k%2!=0&&k!=1) return false;
            k=k/2;
        }
      
       return true;
    }
};