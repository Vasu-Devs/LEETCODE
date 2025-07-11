class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
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

        int lr=-1;
        for(int i=0; i<heights.size();i++){
            int ns=nse[i]==-1?heights.size():nse[i];
            int ps=pse[i];
            lr=max(lr,heights[i]*(ns-ps-1));

        }
        return lr;



    }
};