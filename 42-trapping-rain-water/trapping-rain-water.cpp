class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int wt=0, n=height.size();

        for(int i=0;i<n;i++){
            while(!s.empty() && height[i]>height[s.top()]){
                int bottom = s.top();
                s.pop();

                if(s.empty()) break;

                int left = s.top();
                int width= i - left - 1;
                int wh = min(height[i], height[left]) - height[bottom];

                wt+=width*wh;
            }
            s.push(i);
        }
        return wt;
    }
};