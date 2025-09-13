class Solution {
public:
    // time
    int maxDepth(string s) {
       size_t ans=0;
       int n=s.size();
       stack<char>st;
       for(auto it:s){
        if(it=='('){
            st.push(it);
        }
        else if(it==')'){
            st.pop();
        }
        ans=max(ans,st.size());
       }

       return (int)ans;
    }
};