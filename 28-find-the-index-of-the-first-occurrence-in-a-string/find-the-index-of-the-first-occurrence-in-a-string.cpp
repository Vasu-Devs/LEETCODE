class Solution {
public:
    int strStr(string h, string s) {
        int n=h.length();
        int m=s.length();
        vector<int> lps(m,0);
    
        int len=0;
        int i=1,j;
        if(m==0) return 0;
        while(i<m){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        } i=0,j=0;
        while(i<n){
            if(h[i]==s[j]){
                i++;
                j++;
            }
            if(j==m)
                return i-j;
            else if(i<n && h[i]!=s[j]){
                if(j!=0){
                    j=lps[j-1];
                }else
                    i++;

            }
        }
        return -1;

          
          
    }
};