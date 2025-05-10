#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int count1=0;
        for(auto it:s){
            if(it=='1') count1++;
        }

        int countZero=n-count1;

        int ans=count1*(count1-1)+countZero*(count1+1);

         cout<<ans<<endl;


    }

    return 0;
}