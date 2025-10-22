class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        
       // vector<string>odd,even;
        set<string>st;
        int n=words.size();
        int k=words[0].size();

        for(int i=0;i<n;i++){
            string s1="";
            string s2="";
            for(int j=0;j<k;j++){
                if(j%2==0){
                 s1+=words[i][j];
                }
                else{
                s2+=words[i][j];
                }
            }
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            st.insert(s1+s2);
         }

       
          return (int)st.size();

    }
};