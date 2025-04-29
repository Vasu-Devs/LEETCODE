class Solution {
    public:
        int maxScore(string s) {
            int sum=0,i,j,k,c0,c1,n=s.length();
            for(i=0;i<n;i++){
                c0=0;
                c1=0;
                for(j=0;j<i+1 && j+1!=n;j++){
                    if(s[j]=='0')
                        c0++;
                }
                for(k=i+1;k<n && k<n;k++){
                    if(s[k]=='1')
                        c1++;
                }
                if(c0+c1>sum)
                    sum=c0+c1;
            }
            return sum;
        }
    };