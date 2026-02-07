class Solution {
public:
    int reverse(int x) {
        if(x==0) 
          return 0;
        long long res=x;
        bool neg=false;

        if(res<0){
            neg=true;
            res=llabs(res);
        }

        long long rev=0;
        while(res>0){
            int rem=res%10;
            rev=rev*10+rem;
            res=res/10;
        }  

     if(neg==true) 
       rev=-rev;
        if(rev>INT_MAX||rev<INT_MIN)  
          return 0;

        
        return rev;

    }
};