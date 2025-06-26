class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,m;
        int r=nums.size()-1;
        // while(l<r){
        //     m=l+(r-l)/2;
        //     if(m%2==0 ){
        //         if(nums[m-1]==nums[m] && (m!=0))
        //             r=m;
        //         else if(nums[m+1]==nums[m] && m!=nums.size()-1)
        //             l=m+2;
        //         else return nums[m];
        //     }
        //     else{
        //         if(nums[m-1]==nums[m] && m!=0)
        //             l=m+2;
        //         else if(nums[m+1]==nums[m] && m!=nums.size()-1)
        //             r=m;
        //         else return nums[m];
        //     }
        // }
        // return nums[m];
        while(l<r){
            m=l+(r-l)/2;
            if(m%2==1) m--;
            if(nums[m]==nums[m+1])
                l=m+2;
            else
                r=m;
        }
        return nums[l];
    }
};