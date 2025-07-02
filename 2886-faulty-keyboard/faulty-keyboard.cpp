class Solution {
public:
    string finalString(string s) {
        string r="";
        for(char a : s){
            if(a=='i')
                reverse(r.begin(),r.end());
            else
                r+=a;
        }
        return r;
    }
};