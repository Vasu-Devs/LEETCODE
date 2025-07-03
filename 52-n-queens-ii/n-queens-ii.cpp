class Solution {
public:

    void findQueenPos(
        int n,
        int row,
        vector<string> &board,
        vector<vector<string>> &result,
        vector<int> &cols,
        vector<int> &db,
        vector<int> &df
    ){
        if(row==n){
            result.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            int d1=col-row+n-1;
            int d2=col+row;
            if(!cols[col] && !db[d2] && !df[d1]){
                cols[col]=db[d2]=df[d1]=1;
                board[row][col]='Q';
                findQueenPos(n,row+1,board,result,cols,db,df);
                cols[col]=db[d2]=df[d1]=0;
                board[row][col]='.';
            }
        }
    }

    int setup(int n){
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> result;
        vector<int> cols(n);
        vector<int> db(2*n-1);
        vector<int> df(2*n-1);
        findQueenPos(n,0,board,result,cols,db,df);
        return result.size();
    }
    int totalNQueens(int n) {
        if(n==1) return 1;
        return setup(n);
    }
};