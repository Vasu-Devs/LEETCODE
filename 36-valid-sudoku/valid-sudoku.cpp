class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> digits(9,0);
       
        //checking every row
        for(int i=0;i<9;i++){
            fill(digits.begin(), digits.end(), 0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num = board[i][j] - '1';  
                    if (digits[num]) return false;
                    digits[num] = 1;
                }
            }
        }

        //checking every col
        for(int i=0;i<9;i++){
            fill(digits.begin(), digits.end(), 0);
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    int num = board[j][i] - '1';  
                    if (digits[num]) return false;
                    digits[num] = 1;
                }
            }
        }

        //checking 3x3 matrices
        for (int row = 0; row < 9; row += 3) {
    for (int col = 0; col < 9; col += 3) {
        
        vector<int> digits(9, 0); 
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int r = row + i;
                int c = col + j;
                
                if (board[r][c] != '.') {
                    int num = board[r][c] - '1';
                    if (digits[num] == 1) {
                        return false;
                    }
                    digits[num] = 1;
                }
            }
        }
    }
}

    return 1;
    }
};