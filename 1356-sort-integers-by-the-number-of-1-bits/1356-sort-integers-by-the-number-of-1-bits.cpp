class Solution {
public:
   
    int countOneBits(int num){
        int cnt=0;

        while(num>0){

         if(num%2==1)
           cnt++;
           num=num/2;

        }

        return cnt;
    }
   
    vector<int> sortByBits(vector<int>& arr) {
      
     

    auto lambda=[&](auto &a,auto &b){
       int c1=countOneBits(a);
       int c2=countOneBits(b);

       if(c1==c2){
        return a<b;
       }

       return c1<c2;


         
    };
        
      sort(arr.begin(),arr.end(),lambda);
     
       return arr;
    }
};