class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pp=1,sp=1,i=0;
        vector<int> r(nums.size(),1);
        while(i<nums.size()){
            r[i]=pp;
            pp*=nums[i];
            i++;
        }
        i=nums.size()-1;
        while(i>=0){
            r[i]*=sp;
            sp*=nums[i];
            i--;
        }
        return r;
                
    }
};