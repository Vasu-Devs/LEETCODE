class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // for(int i=1;i<nums.size()-1;i++){
        //     if(nums[i-1]<nums[i] && nums[i+1]<nums[i])
        //         return i;
        // }
        // return -1;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int m=l+(r-l)/2;
            if(nums[m]<nums[m+1])
                l=m+1;
            else
                r=m;
        }
        return l;
    }
};