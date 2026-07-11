class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<vector<int>>result(col,vector<int>(row));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                result[j][i]=matrix[i][j];
            }
        }
      for(int i = 0; i < result.size(); i++) {
            reverse(result[i].begin(), result[i].end());
        }
        matrix=result;
    }
};