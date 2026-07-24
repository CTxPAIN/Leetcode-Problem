class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();

        // first digit of row is zero then filip the whole row 
        for(int i=0;i<row;i++){
            if(grid[i][0]==0){
                for(int j=0;j<col;j++){
                    grid[i][j]^=1;
                }
            }
            }

            // column wise flipping hogi

            
            for(int j=1;j<col;j++){
                int one=0;
                for(int i=0;i<row;i++){
                    if(grid[i][j]==1)one++;
            }
            // aab flip krna padega
                if(one<row-one){
                    for(int i=0;i<row;i++){
                        grid[i][j]^=1;
                    }
                }
            }


            //calculate part

            int ans=0;
            for(int i=0;i<row;i++){
                int val=0;
                for(int j=0;j<col;j++){
                    val=2*val+grid[i][j];
                }
                ans+=val;
            }
        
        return ans;
    }
};