class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),[](const string &a , const string &b){
            if(a.size()!=b.size())
                return a.size()>b.size();
            return a>b;
        });

        // cout<<n;
        return nums[k-1];
        // sort(nums.begin(),nums.end(),[](const string &a , const string &b){
        //     if(a.size()!=b.size())
        //         return a.size()<b.size();
        //     return a<b;
        // });
        // int n=nums.size()-k;
        // // cout<<n;
        // return nums[n];
    }
};