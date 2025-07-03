class Solution {
public:
    void findQueenPos(
        int n,
        int row,
        vector<string> &board,
        vector<vector<string>> &result,
        vector<int> &cols,
        vector<int> &df,
        vector<int> &db
    ){
        if(row==n){
            result.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            int d1=col-row+n-1;
            int d2=col+row;
            if(!cols[col] && !df[d1] && !db[d2]){
                cols[col]=df[d1]=db[d2]=1;
                board[row][col]='Q';
                 findQueenPos(n,row+1,board,result,cols,df,db);
                cols[col]=df[d1]=db[d2]=0;
                board[row][col]='.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> result;
        vector<int> cols(n);
        vector<int> df(2*n-1);
        vector<int> db(2*n-1);
        findQueenPos(n,0,board,result,cols,df,db);
        return result;
    }
    
};