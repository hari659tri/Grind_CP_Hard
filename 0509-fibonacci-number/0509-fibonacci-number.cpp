class Solution {
public:
    int fib(int n) {
        
         if(n==0||n==1)
           return n;

           int p1=0;
           int p2=1;
           for(int i=2;i<=n;i++){
              int sum=p1+p2;
              p1=p2;
              p2=sum;
           }

         return p2;

    }
};