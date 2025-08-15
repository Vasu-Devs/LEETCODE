class Solution {
public:
    bool isPowerOfFour(int n) {
        long long f=1;
        while(true){
            if(f==n) return 1;
            if(f>n) return 0;
            f*=4;
        }
    }
};