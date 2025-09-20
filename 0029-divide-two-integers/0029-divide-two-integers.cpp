class Solution {
public:
    int divide(int dividend, int divisor) {
        
        bool sign=true;
        long long D=abs((long long )dividend);
        long d=  abs((long long)divisor);

        if(divisor<0&&dividend>=0){
          sign=false;
         

        }
        else if(divisor>0&&dividend<0){
            sign=false;
          
        }
         
      long long q=(long long)D/d;
        q= (sign==true?q:-q);
      
      

        if(q>INT_MAX) return INT_MAX;
        if(q<INT_MIN) return INT_MIN;

        return q;
    }
};