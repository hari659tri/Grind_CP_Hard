class Solution {
public: 
   bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
    return false;
   }
    int countVowelSubstrings(string word) {
        int n=word.size();
         int cnt=0;

         unordered_map<char,int>mp;

         for(int i=0;i<n;i++){
            mp.clear();
            for(int j=i;j<n;j++){
                if(isvowel(word[j])){
                    mp[word[j]]++;
                }
                else break;

                if(mp.size()==5) cnt++;
            }
         }
          
          return cnt;
    }

};