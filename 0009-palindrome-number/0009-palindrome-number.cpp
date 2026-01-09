class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) 
        return false;

        int org=x;
        long long res=0;
        while(x>0){

            int r=x%10;
            res=res*10+r;
            x=x/10;
        }
      

      if(org==res) return true;

      return false;

    }
};