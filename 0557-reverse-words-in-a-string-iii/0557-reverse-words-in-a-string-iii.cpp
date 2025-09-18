class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>ans;
         while(ss>>word){
          ans.push_back(word);
         }
     
       string str="";
       for(auto it:ans){
        reverse(it.begin(),it.end());
        str+=it;
        str+=" ";
       }

     
      return str.substr(0,str.size()-1);
    }
};