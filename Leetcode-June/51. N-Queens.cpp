class Solution { 
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> > queens;
        vector<int> colPos(n, 0);
        solve(colPos, n, 0, queens);
        return queens;
    }
private:
    bool noAttack(vector<int>& colPos, int row, int col) {
        for (int r = row - 1, ld = col - 1, rd = col + 1; r >= 0; r--, ld--, rd++)
            if (colPos[r] == col || colPos[r] == ld || colPos[r] == rd)
                return false;
        return true;
    }
    vector<string> queenStr(vector<int>& colPos) {
        int n = colPos.size();
        vector<string> queen(n, string(n, '.'));
        for (int i = 0; i < n; i++)
            queen[i][colPos[i]] = 'Q';
        return queen;
    }
    void solve(vector<int>& colPos, int n, int row, vector<vector<string> >& queens) {
        if (row == n) {
            queens.push_back(queenStr(colPos));
            return;
        }
        for (int col = 0; col < n; col++) {
            colPos[row] = col;
            if (noAttack(colPos, row, col))
                solve(colPos, n, row + 1, queens);
        }
    }
};