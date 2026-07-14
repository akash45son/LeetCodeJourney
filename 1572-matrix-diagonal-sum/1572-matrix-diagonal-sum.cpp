class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int ans = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(i == j || i + j == rows - 1){
                    ans += matrix[i][j];
                }
            }
        }

        return ans;
    }
};