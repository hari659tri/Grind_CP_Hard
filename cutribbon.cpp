#include<bits/stdc++.h>
using namespace std;

#define ll long long ;
#define ld long double;
const int m=1e9+7;
 int dp[4001];

  int fun(int i,int a,int b,int c){

    if(dp[i]!=-1) return dp[i];

    if(i==0) return dp[i]=0;

    int ans=INT_MIN;

    if(i-a>=0){
        ans=max(ans,1+fun(i-a,a,b,c));
    }

    if(i-b>=0){
        ans=max(ans,1+fun(i-b,a,b,c));
    }

    if(i-c>=0){
        ans=max(ans,1+fun(i-c,a,b,c));
    }

    return dp[i]=ans;
  }

 int main(){
 int n,a,b,c;

 cin>>n>>a>>b>>c;

  for(int i=0;i<=n;i++){
    dp[i]=-1;
  }
   
  cout<<fun(n,a,b,c)<<"\n";

  return 0;

  // tc-->O(n)
  //SSPACE->O(n)
 }