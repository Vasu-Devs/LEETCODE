class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int c=0,mx=0;
        // for(int i=0;i<size(nums);i++){
        //     int x=count(nums.begin(),nums.end(),nums[i]);
        //     if(x>c){
        //         mx=nums[i];
        //         c=x;
        //     }
            
        // }
        // return mx;
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};