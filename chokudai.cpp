#include<bits/stdc++.h>
using namespace std;
int dp[100002][9];
const int m=1e9+7;

int fun(string &s,string &t,int i,int j){
   if(j==8) return 1;
   if(i==s.size())return 0;
     
    if(dp[i][j]!=-1) return dp[i][j];
   //int nottake = 0;
  // if(s[i] != s[j])
     int  nottake = fun(s, t, i+1, j);
  // int take = 0;
   if(s[i]==t[j]){
      nottake=(nottake+fun(s,t,i+1,j+1))%m;
   }


   return dp[i][j]=(nottake);

}
int main(){
    string s;
    cin>>s; // i
    string t="chokudai";// j
    int n=s.size(); 
   
    //int m=1e5;
    for(int i=0;i<n;i++){
      for(int j=0;j<9;j++){
        dp[i][j]=-1;
      }
    }
      
   cout<< fun(s,t,0,0)<< "\n";




  return 0;

}