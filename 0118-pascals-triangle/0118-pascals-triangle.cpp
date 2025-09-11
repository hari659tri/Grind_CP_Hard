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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        for(int i=1;i<=numRows;i++){
            vector<int>temp;
            for(int col=1;col<=i;col++ ){
                temp.push_back(ncr(i-1,col-1));
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};