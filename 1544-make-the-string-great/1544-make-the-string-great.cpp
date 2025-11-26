class Solution {
public:
    string makeGood(string s) {
         
         stack<char>st;
         int n=s.size();

         for(int i=0;i<n;i++){
           if(!st.empty()&&islower(st.top())&&isupper(s[i])&&tolower(st.top())==tolower(s[i])){
            st.pop();
           }
           else if(!st.empty()&&isupper(st.top())&&islower(s[i])&&tolower(st.top())==tolower(s[i]))
           st.pop();
           else{
            st.push(s[i]);
           }
         }

       string ans="";

    
       while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
       }
       return ans;
    }

};