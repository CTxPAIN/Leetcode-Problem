// class Solution {
// public:



//it give timme complexity of O(m*n)=O(n^2)


//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(matrix[i][j]==target)return true;
//             }

//         }
//         return false;
//     }
// };


class Solution{
    public:
    
    bool searchMatrix(vector<vector<int>>&matrix,int target){
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=matrix[0].size()-1;

        while(i<matrix.size()&&j>=0){
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]>target)j--;
            else i++;
        }
        return false;
    }

} ;