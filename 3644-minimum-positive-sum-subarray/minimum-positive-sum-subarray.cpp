class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int m=INT_MAX;
        for(int i=l;i<=r;i++){
            int s=0;
            for(int j=0;j<i;j++){
                s+=nums[j];
            }
            if(s>0) m=min(s,m);
            int l=0;
            for(int k=i;k<nums.size();k++){
                s+=nums[k];
                s-=nums[l++];
                if(s>0) m=min(s,m);
            }


        }
        return m==INT_MAX?-1:m;
    }
};