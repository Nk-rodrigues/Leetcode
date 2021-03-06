class NumMatrix {
private:
    vector<vector<int>> sum;
    
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = row>0 ? matrix[0].size() : 0;
        sum = vector<vector<int>> (row+1, vector<int> (col+1, 0));
        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                sum[i][j] = matrix[i-1][j-1] + sum[i-1][j] + sum[i][j-1] - sum [i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return sum[row2+1][col2+1]-sum[row1][col2+1]-sum[row2+1][col1]+sum[row1][col1];
    }
};