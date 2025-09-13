class Solution {
public:
    int power(int n, long long t, int M) {
        int ans = 1;
        while (t > 0) {
            if (t % 2) {
                ans = (ans * 1LL * n) % M;
                t--;
            } else {
                n = (n * 1LL * n) % M;
                t /= 2;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        // n=4  _ _ _ _  -> 5 * 4 * 5 * 4
        // 5^n/2 * 4^n/2 -> 5 even numbers at even pos and 4 prime at odd places

        // n = even 6,8 then 5^n/2 * 4^n/2
        // n= odd 3,5 then 5^(n+1)/2 * 4^n/2

        long long even = (n + 1) / 2;
        long long odd = n / 2;
        int M = 1e9 + 7;

        return (power(5, even, M) * 1LL * power(4, odd, M)) % M;
    }
};