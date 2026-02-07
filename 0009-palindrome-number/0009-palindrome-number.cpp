class Solution {
public:
    bool isPalindrome(int x) {
        if(0<=x&&x<=9) return true;
        if(x<0) return false;
         int org=x;
          long long  rev=0;
         while(x>0){
            long long rem=x%10;
            rev=rev*10+rem;
            x=x/10;
         }

         if(rev==org) 
           return true;


           return false;

    }
};