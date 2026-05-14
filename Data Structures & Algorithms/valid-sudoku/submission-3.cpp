class Solution {
public:
        static bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_set<char> row;
            unordered_set<char> col;
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(row.count(board[i][j]))
                        return false;
                    row.insert(board[i][j]);
                }
                if(board[j][i] != '.'){
                    if(col.count(board[j][i]))
                        return false;
                    col.insert(board[j][i]);
                    }
            }
        }
        for(int i = 0; i<9; i+=3){
            for(int j=0; j<9; j+=3){
                unordered_set<char> tmp;
                for(int col_i = i; col_i<i+3; col_i++){
                    for(int row_i = j; row_i<j+3; row_i++){
                        if(board[col_i][row_i] == '.') continue;
                        if(tmp.count(board[col_i][row_i])) return false;
                        tmp.insert(board[col_i][row_i]);
                    }
                }
            }
        }
        return true;
    }
};
