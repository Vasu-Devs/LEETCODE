class Solution {
public:
    static bool cmp(int& a, int& b){
        string s1 = to_string(a);
        string s2 = to_string(b);
        return s1+s2 > s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        if(nums[0]==0) return "0";
        string res="";
        for(auto x: nums) res += to_string(x);
        return res;
    }
};