class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int ans = 0;

        for(int i = 0; i < rows; i++){
                
            ans += matrix[i][i];
            ans += matrix[i][rows-1-i];
                
        }
        if(rows%2==1){
        ans -= matrix[rows/2][cols/2];
        }

        return ans;
    }
};