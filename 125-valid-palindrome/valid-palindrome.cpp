class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=s.length()-1;i>=0;i--){
            if(isalnum(s[i])){
                s[i]=tolower(s[i]);
                a+=s[i];
            }
        }
        
        string b="";
        b=a;
        reverse(b.begin(),b.end());
        if(b==a)
            return 1;
        return 0;
        // int l=0,r=a.length()-1;
        // while(l<r){
        //     if(a[l]!=a[r])
        //         return 0;
        //     l++;
        //     r--;
        // }
        // return 1;
    }
};