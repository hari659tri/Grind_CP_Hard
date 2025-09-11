class Solution {
public:
   long long ncr(int n,int r){

    long long res=1;

    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
   }

     void getRowElement(int row,vector<int>&temp){

         if(row==1){
            temp.push_back(1);
            return;
         }
         long long res=1;
         temp.push_back(res);
          for(int i=1;i<row;i++){
              res=res*(row-i);
              res=res/i;
              temp.push_back(res);
          }
    
          return;

     }


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        
        // for(int i=1;i<=numRows;i++){
        //     vector<int>temp;
        //     for(int col=1;col<=i;col++ ){
        //         temp.push_back(ncr(i-1,col-1));
        //     }
        //     ans.push_back(temp);
        // }
        
        // return ans;

        // time complexity O(n^2*r) where n=number of row and r is number of column in worst case O(n^3) if n=r


        // optimized approach it will takes the time O(N^2)
       
         for(int i=1;i<=numRows;i++){
            vector<int>temp;
           getRowElement(i,temp);
           ans.push_back(temp);

         }

         return ans;

    }
};