class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> matrix2(r,vector<int>(c));
        if(m*n != r*c){
            return mat;
        }
        int index = 0;
         for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
               int newrow= index/c;
                int newcol=index%c;
                matrix2[newrow][newcol] = mat[i][j];
                index++;
            }
            }
        return matrix2;
    }
};