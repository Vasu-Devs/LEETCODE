class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN;
        int c=0;
        for(int i : nums){
            c=max(i,c+i);
            m=max(m,c);
        }
        return m;
    }
};