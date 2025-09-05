class Solution {
public:
   
//    string solve(string &s){

   

//     int i=0;
//     int j=s.size()-1;

//        while(i<j){
//         swap(s[i],s[j]);
//         i++;
//         j--;
//        }
//        return s;
//    }
    string reverseWords(string s) {
         reverse(s.begin(),s.end());
        int n=s.size();
         string ans="";
        
        for(int i=0;i<n;i++){
             string s1="";
            while(i<n&&s[i]!=' '){
                s1+=s[i];
                i++;
            }
            

            if(s1.size()>0){
                reverse(s1.begin(),s1.end());
                ans+=" "+s1;
            }
        }
    
      return ans.substr(1);

    }
};