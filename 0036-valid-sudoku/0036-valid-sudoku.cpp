class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int blocks[3][3][9] = {0};
        
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.') {
                    int number = board[i][j] - '1';
                    
                    if (row[i][number]++) return false;
                    if (col[j][number]++) return false;
                    if (blocks[i/3][j/3][number]++) return false;
                }
            }
        }
        return true;
    }
};