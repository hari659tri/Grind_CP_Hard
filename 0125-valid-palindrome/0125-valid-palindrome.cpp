class Solution {
public:
  
  bool isalpha(char ch){

    if(97<=tolower(ch)&&tolower(ch)<=122)
       return true;

       if('0'<=ch&&ch<='9') 
         return true;

        
         return false;

  }
    bool isPalindrome(string s) {
        
        int i=0;
        int n=s.size();
        int j=n-1;

         if(!isalpha(s[i])) 
           i++;

         if(!isalpha(s[j]))
           j--;

           while(i<j){
            if(isalpha(s[i])&&isalpha(s[j])){
                if(tolower(s[i])==tolower(s[j])){
                    i++;
                    j--;
                }
                else
                return false;
            }
            
            if(!isalpha(s[i])) 
           i++;
    
            if(!isalpha(s[j]))
           j--;

           }


     return true;
    }
};