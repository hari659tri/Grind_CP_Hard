#include<bits/stdc++.h>
using namespace std;


 int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;
        int lent=0;
        int cnt0=0;
        int cnt1=0;
        int len=s.size();

        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                cnt0++;
            }
            else{
                cnt1++;

            }
        }

       for(int i=0;i<s.size();i++){
        if(s[i]=='0'&&cnt1>0){
            cnt1--;
            lent++;
        }
        else if(s[i]=='1'&&cnt0>0){
            cnt0--;
            lent++;
        }
        else 
           break;

       }
   cout<<len-lent<<endl;
    }  

     


    return 0;
 }