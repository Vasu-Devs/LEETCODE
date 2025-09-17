class Solution {
public:
    bool isPrime(int n){
            if(n<=2) return n==2;
            if(n%2==0) return false;
            for(int i=3;i*i<=n;i+=2) if(n%i==0) return false;
            return true;
        }
    int primePalindrome(int n) {
        int i=n;
        while(1){
            string s=to_string(i);
            if(isPrime(i)){ 
                string r(s.rbegin(),s.rend());
                if(r==s)
                return i;
            }
            i++;
            if (10000000 < i && i < 100000000) i = 100000000;
        }
        return -1;
    }
};