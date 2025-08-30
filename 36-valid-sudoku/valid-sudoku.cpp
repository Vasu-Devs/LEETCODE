class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){ 
            bool seen[9]={false}; 
            for(int j=0;j<9;j++){  
                if(board[i][j]=='.'){ 
                    continue ;
                }
                int num=board[i][j]-'1'; 
                if(seen[num]){ 
                    return false;
                }
                seen[num]=true;  
            }
        }


        for(int j=0;j<9;j++){ 
            bool seen[9]={false}; 
            for(int i=0;i<9;i++){ 
                if(board[i][j]=='.'){ 
                    continue ;
                }
                int num=board[i][j]-'1';      
                if(seen[num]){                
                    return false;
                }
                seen[num]=true ;               
            }
        }


        for(int boxrow=0;boxrow<3;boxrow++){      
            for(int boxcolumn=0;boxcolumn<3;boxcolumn++){ 
                bool seen[9]={false};              
                for(int i=0;i<3;i++){                
                    for(int j=0;j<3;j++){             
                        int r=boxrow*3+i;             
                        int c=boxcolumn*3+j;         
                        if(board[r][c]=='.'){          
                            continue ;
                        }
                        int num=board[r][c]-'1';
                        if(seen[num]){             
                            return false;
                        }
                        seen[num]=true ;             
                    }
                }
            }
        }
        return true ;
    }
};