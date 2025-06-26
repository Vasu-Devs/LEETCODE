class Solution {
public:
    void sortColors(vector<int>& nums) {
        // bool f=true;
        // for(int i=0;i<nums.size()-1;i++){
        //     bool f=false;
        //     for(int j=0;j<nums.size()-i-1;j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j],nums[j+1]);
        //             f=true;
        //         }
        //     }
        //     if(!f){
        //         break;
        //     }
        // }
        // return nums;
        // for(int i=0;i<nums.size()-1;i++){
        //     int me=i;
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[me]>nums[j])
        //             me=j;
        //     }
        //     if(me!=i)
        //         swap(nums[me],nums[i]);
        // }
        // Dutch flag ALgo
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0)
                swap(nums[mid++],nums[low++]);
            else if(nums[mid]==1)
                mid++;
            else
                swap(nums[mid],nums[high--]);
        }


    }
};