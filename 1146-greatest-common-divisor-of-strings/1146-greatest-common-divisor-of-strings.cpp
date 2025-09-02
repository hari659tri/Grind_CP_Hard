class Solution {
public: 

  int gcd(int a,int b){

    if(b==0) return a;
     
     return gcd(b,a%b);
  }
    string gcdOfStrings(string str1, string str2) {

        int n=str1.size();
        int m=str2.size();

        if(n==m) return "";

        int g=gcd(n,m);
       string ans="";
        for(int i=0;i<g;i++){
            ans+=str1[i];
        }

        return ans;
    }
};