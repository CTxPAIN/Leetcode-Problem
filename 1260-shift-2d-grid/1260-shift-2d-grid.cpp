class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int row=grid.size();
        int col=grid[0].size();
        int total=row*col;
        k%=total;

        vector<vector<int>>ans(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               int oldIndx=i*col+j;
               int newIndx=(oldIndx+k)%total;

               int newRow=newIndx/col;
               int newCol=newIndx%col;

               ans[newRow][newCol]=grid[i][j];
            }
        }
            return ans;
    }
};