class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cnt =0;
        int i=0, j=1;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        while(j<n){
            if(intervals[i][1] <= intervals[j][0]){
                i=j;
                j++;
            }else if(intervals[i][1] <= intervals[j][1]){
                j++;
                cnt++;
            }else{
                i=j;
                j++;
                cnt++;
            }
        }
        return cnt;
    }
};