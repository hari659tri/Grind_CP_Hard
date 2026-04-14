class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

      // find the transpose of the matrix...

      int n=matrix.size();
     // transpose...
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
      }
       
       // reverse it is in a row wise...

       for(int i=0;i<n;i++){
         int l=0;
         int h=n-1;
         while(l<h){
            swap(matrix[i][l],matrix[i][h]);
            l++;
            h--;
         }
       }
      

    }
};