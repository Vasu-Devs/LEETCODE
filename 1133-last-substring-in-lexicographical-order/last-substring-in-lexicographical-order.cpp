class Solution {
public:
    string lastSubstring(string s) {
        int i=0,k=0;
        int j=1;
        while(j<s.length()){

            if(s[i+k]==s[j+k]) k++;
            else if(s[i+k]<s[j+k]){
                i=max(i+k+1,j);
                j=i+1;
                k=0;
            }
            else {
                j+=k+1;
                k=0;
            }
        }
        return s.substr(i);
    }
};