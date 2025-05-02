class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]==val){
                c++;
            }
        }
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        return nums.size();
    }
};