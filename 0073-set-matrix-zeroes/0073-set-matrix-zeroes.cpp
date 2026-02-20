class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
       // vector<vector<int>>temp=matrix;

        int r=matrix.size();
        int c=matrix[0].size();

        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(matrix[i][j]==0){
        //             for(int k=0;k<c;k++){
        //                 temp[i][k]=0;
        //             }

        //             for(int k=0;k<r;k++){
        //                 temp[k][j]=0;
        //             }
        //         }
        //     }
        // }

        // matrix=temp;


        //this is an a brute force appraoch 
        // for the optimal approach we use to sotre the row number as a boolean 


        vector<bool>row(r,false);
        vector<bool>col(c,false);

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }

        for(int i=0;i<r;i++){
            if(row[i]){
                for(int j=0;j<c;j++){
                    matrix[i][j]=0;
                }
            }
        }
   
      for(int j=0;j<c;j++){
            if(col[j]){
                for(int i=0;i<r;i++){
                    matrix[i][j]=0;
                }
            }
        }


    }
};