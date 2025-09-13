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
    int countAnagrams(string s) {
        int res =1;
        int M = 1e9+7;
        const int n = 1e5+1;
        int fact[n]; fact[0]=1;

        for(int i=1; i<n; i++) fact[i]=(fact[i-1]*1LL*i)%M;

        stringstream ss(s);
        string word;
        while(ss>>word){
            int freq[26]={0};

            int l = word.length();
            for(char c: word) freq[c-'a']++;

            int ans = fact[l];// passing the word length after spaces
            int deno = 1;

            for(int i=0; i<26; i++) deno=(deno*1LL*fact[freq[i]])%M;

            ans = (ans*1LL*power(deno, M-2, M))%M;
            res =  (res*1LL*ans)%M;
        }
        return res;
    }
};