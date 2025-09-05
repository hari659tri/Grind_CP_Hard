class Solution {
public:
    string removeOuterParentheses(string s) {
        
        // stack<char>st;
        // int n=s.size();
        //  string ans="";

        // for(int i=0;i<n;i++){

        //     if(s[i]=='('){
            
        //       if(!st.empty()){
        //            ans+=s[i];
        //       }
        //       st.push(s[i]);

        //     }
        //     else{
        //       st.pop();
        //       if(!st.empty()){
        //         ans+=s[i];
        //       }
        //     }
        // }

        // return ans;

        // time complexity is O(n)
        // space complexity o(n)

        // optimized approaches for this one 

        int cnt=0;
        int n=s.size();
        string ans="";

        for(int i=0;i<n;i++){
            
            if(s[i]=='('){
                if(cnt>0){
                    ans+=s[i];
                }
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0){
                    ans+=s[i];
                }
            }
        }

        return ans;
    }
};