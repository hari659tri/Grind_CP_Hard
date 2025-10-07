class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();

        int row=n-1;
        int col=0;

        while(row>=0&&col<m){

            if(grid[row][col]<0){
                ans+=(m-col);
                row-=1;
            }
            else{
                col+=1;
            }

   
        }

        return ans;

        // time complexity is O(m+n)
    }
};