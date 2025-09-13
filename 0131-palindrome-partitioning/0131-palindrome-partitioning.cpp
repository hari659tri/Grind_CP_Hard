class Solution {
public: 
 bool isPlandrome(string&s,int i,int j){
    
    while(i<j){
    if(s[i]!=s[j]){
        return false;
    }
    i++;
    j--;
    }
    return true;
 }
  
   void func(int idx,string &s,vector<string>&path,vector<vector<string>>&ans){

    if(idx==s.size()){
        ans.push_back(path);
        return;
    }


    for(int i=idx;i<s.size();i++){
        if(isPlandrome(s,idx,i)){
            path.push_back(s.substr(idx,i-idx+1));
            func(i+1,s,path,ans);
            path.pop_back();
        }
    }
   }
 
    vector<vector<string>> partition(string s) {
        
         vector<vector<string>>ans;
         vector<string>path;
        
         
         func(0,s,path,ans);

         return ans;
    }
};