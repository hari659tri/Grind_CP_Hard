class Solution {
public: 

  bool alpha(char ch1){
    if(('0'<=ch1&&ch1<='9')||('a'<=ch1&&ch1<='z')||('A'<=ch1&&ch1<='Z')) return true;
    // if(('0'<=ch2&&ch2<='9')||('a'<=ch2&&ch2<='z')) return true;

    return false;


  }


    bool check(int i,int j,string &s){
        
         if(i>=j) return true;
         
        if(!isalnum(s[i])){
           return check(i+1,j,s);
        }
        if(!isalnum(s[j])){
            return check(i,j-1,s);
        }

      if(tolower(s[i])!=tolower(s[j])) return false;
     
        
      return  check(i+1,j-1,s);

     
    }
    bool isPalindrome(string s) {
        
        // i can solve it recursion first right it's iterative code

        int n=s.size();
        int i=0;
        int j=n-1;

        // recursive implementation 

       return check(i,j,s);


        //  while(i<j){
           
        //     if(!alpha(s[i])){
        //      i++;
        //       continue;
        //     } 

        //      if(!alpha(s[j])){
        //      j--;
        //       continue;
        //     } 


        //      if(tolower(s[i])!=tolower(s[j])){
        //         return false;
        //      }
        //      i++;
        //      j--;
        //  }


        //  return true;
    }
};