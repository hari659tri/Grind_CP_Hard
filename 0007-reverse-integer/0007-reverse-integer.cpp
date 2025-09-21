class Solution {
public:
    int reverse(int x) {
        bool sign=true;
        if(x<0) sign=false;
        long long s=abs((long long)x);
        long long sum=0;
        
        while(s!=0){
            int rem=s%10;
            sum=sum*10+rem;
            s=s/10;

        }


      if(sum>INT_MAX||sum<INT_MIN) return 0;

        if(sign==false) sum=-sum;
        return sum;

    }

};