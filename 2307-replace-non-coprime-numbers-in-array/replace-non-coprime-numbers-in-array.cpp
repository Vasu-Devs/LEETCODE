class Solution {
public:
     int GCD(int a, int b) {
        if (b == 0) return a;
        return GCD(b, a % b);
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int n=nums.size();
        vector<int> st;
        for(int i=0;i<n;++i){
            int gcd;
            int curr=nums[i];
            while(st.size()>0){
                gcd=GCD(st.back(),curr);
                if(gcd==1)
                    break;
                long long lcm=(1LL*st.back()*curr)/gcd;
                st.pop_back();
                curr=lcm;
            }
            st.push_back(curr);
        }
    return st;
    }
};