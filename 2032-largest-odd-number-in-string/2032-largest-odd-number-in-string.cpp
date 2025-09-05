class Solution {
public:
    string largestOddNumber(string num) {
        
      // if((long long) stoll(num)%2==1) return num;
  // a number is odd if and only if its rightmost digit is odd then only we can say it is odd number 
    
    int n=num.size();

     for(int i=n-1;i>=0;i--){
        if((num[i]-'0')%2==1) return num.substr(0,i+1);
     }

     // time complexity  is O(n)


      return "";

    }
};