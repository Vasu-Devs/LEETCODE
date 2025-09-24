class Solution {
public:
    bool canJump(vector<int>& nums) {
        int des = nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(des<= i+nums[i])
                des=i;
        }
        return des==0;
    }
};