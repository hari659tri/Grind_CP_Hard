class Solution {
public: 
  bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;

    return false;
  }
   
    int vowelStrings(vector<string>& words, int left, int right) {
        //stringstream ss(words);
        
      int n=words.size();
      int cnt=0;
      for(int i=left;i<=right;i++){
        string str=words[i];
        if(isvowel(str[0])&&isvowel(str[str.size()-1]))cnt++;

      }
       
       return cnt;
    }
};