class Solution {
public:
  
  bool isAlpha(char ch){

    if((ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        return true;
    }

    return false;
    
  }
    bool isPalindrome(string s) {
         
        int n=s.length();
    

        int i=0;
        int j=n-1;

        while(i<j){

      if(!isAlpha(s[i])){
        i++;
        continue;

      }
       

       if(!isAlpha(s[j])){
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