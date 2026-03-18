class Solution {
public: 
  bool vowel(char ch){
    char c=tolower(ch);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') 
     return true;

     return false;
  }
    string reverseVowels(string s) {
        string w=s;
        int n=s.size();
        int i=0;
        int j=n-1;

        while(i<j){

            while(i<j&&(!vowel(s[i]))){
               i++;
            }
      
         while(i<j&&(!vowel(s[j]))){
               j--;
            }
     
        swap(w[i],w[j]);
        i++;
        j--;
        }

        return w;

    }
};