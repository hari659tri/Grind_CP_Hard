class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
         vector<int>v;
         int i=0;
         int j=0;
      while(i<m&&j<n){
          
          if(a[i]<=b[j]){
              v.push_back(a[i]);
              i++;
          }
          else{
              v.push_back(b[j]);
              j++;
          }
          
      }

      while(i<m){
       v.push_back(a[i]);
       i++;
   }
   
   while(j<n){
       v.push_back(b[j]);
       j++;
   }


   a=v;
    }
};

/*

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

  
   
   vector<int>a(n);
   vector<int>b(m);
   
    for(int i=0;i<n;i++)
      cin>>a[i];
      
      for(int i=0;i<m;i++)
        cin>>b[i];
        
        
      int i=0;
      int j=0;
      vector<int>v;
      
      
   
   
   
   
   int d=v.size();
   
    for(int i=0;i<d;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
    
}




*/