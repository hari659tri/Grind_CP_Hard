class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>flat;
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                flat.push_back(matrix[i][j]);
            }
        }

        int l=0;
        int h=m*n-1;

        while(l<=h){
            int mid=l+(h-l)/2;

            if(flat[mid]==target){
                return true;
            }
            else if(flat[mid]>target){
                h=mid-1;
                
            }
            else
                l=mid+1;
        }

     return false;
    }
};