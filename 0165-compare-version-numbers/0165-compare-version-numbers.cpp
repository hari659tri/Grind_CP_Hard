class Solution {
public:
  
  vector<string>fun(string s){

    stringstream ss(s);
    vector<string>result;
       string temp;
     while(getline(ss,temp,'.')){
        result.push_back(temp);
     }

     return result;

  }
    int compareVersion(string version1, string version2) {
        
        vector<string>v1=fun(version1);
        vector<string>v2=fun(version2);
        int lenv1=v1.size();
        int lenv2=v2.size();
         
         int i=0;
         int j=0;
         while(i<lenv1||j<lenv2){
            int a=(i<lenv1?stoi(v1[i]):0);
            int b=(j<lenv2?stoi(v2[j]):0);

            if(a<b) return -1;
            else if(b<a) return 1;
             
            i++;
            j++;


         }

   return 0;

    }
};