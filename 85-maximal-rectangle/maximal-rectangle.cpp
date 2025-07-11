class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if (row == 0) return 0;
        int col = matrix[0].size();

        
        vector<vector<int>> m2(row,vector<int>(col,0));
        for(int i=0;i<col;i++)
            m2[0][i]=matrix[0][i]-'0';

        for(int i=1;i<row;i++){
            for(int j=0;j<col;j++){
                    if(matrix[i][j]=='1')
                        m2[i][j]=m2[i-1][j]+1;
                    else
                        m2[i][j]=0;

            }
        }
        int lr=-1;
        for(auto& heights : m2){
            vector<int> pse(heights.size(),-1);
            vector<int> nse(heights.size(),-1);
            stack<int> s;
            for(int i=0;i<heights.size();i++){
                while(!s.empty() && heights[s.top()]>=heights[i])
                    s.pop();

                if(!s.empty()) pse[i]=s.top();

                s.push(i);
            }
            stack<int> empty;
            s.swap(empty);
            for(int i=heights.size()-1;i>=0;i--){
                while(!s.empty() && heights[s.top()]>=heights[i])
                    s.pop();

                if(!s.empty()) nse[i]=s.top();

                s.push(i);
            }

            for(int i=0; i<heights.size();i++){
                int ns=nse[i]==-1?heights.size():nse[i];
                int ps=pse[i];
                lr=max(lr,heights[i]*(ns-ps-1));

            }
            
        } 
        return lr;
    }
};