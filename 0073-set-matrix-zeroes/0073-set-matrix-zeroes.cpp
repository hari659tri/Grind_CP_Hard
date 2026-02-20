class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<vector<int>>temp=matrix;

        int r=matrix.size();
        int c=matrix[0].size();

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<c;k++){
                        temp[i][k]=0;
                    }

                    for(int k=0;k<r;k++){
                        temp[k][j]=0;
                    }
                }
            }
        }

        matrix=temp;
    }
};