class Solution {
public: 

  bool alpha(char ch1){
    if(('0'<=ch1&&ch1<='9')||('a'<=ch1&&ch1<='z')||('A'<=ch1&&ch1<='Z')) return true;
    // if(('0'<=ch2&&ch2<='9')||('a'<=ch2&&ch2<='z')) return true;

    return false;


  }
    bool isPalindrome(string s) {
        
        // i can solve it recursion first right it's iterative code

        int n=s.size();
        int i=0;
        int j=n-1;


         while(i<j){
           
            if(!alpha(s[i])){
             i++;
              continue;
            } 

             if(!alpha(s[j])){
             j--;
              continue;
            } 


             if(tolower(s[i])!=tolower(s[j])){
                return false;
             }
             i++;
             j--;
         }


         return true;
    }
};