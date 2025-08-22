class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
         int minrow=n;
         int mincol=m;
         int maxrow=-1;
         int maxcol=-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                
                minrow=min(minrow,i);
                mincol=min(mincol,j);
                maxrow=max(maxrow,i);
                maxcol=max(maxcol,j);
               
                }
            }
        }

        return (maxrow-minrow+1)*(maxcol-mincol+1);
    }
};