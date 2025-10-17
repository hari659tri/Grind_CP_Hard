class Solution {
public:
    string convertDateToBinary(string date) {

          string ans="";
        stringstream ss(date);
        string digit;
        while(getline(ss,digit,'-')){
          int num=stoi(digit);
          string store="";
          while(num!=0){
             if(num%2==0){
                store+='0';
             }
             else{
                store+='1';
             }
         num=num/2;
          }
          reverse(store.begin(),store.end());
          ans+=store;
          ans+='-';
        }

   return ans.substr(0,ans.size()-1);
   
    }
};