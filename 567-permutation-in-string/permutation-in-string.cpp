class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        // int s;
        sort(s1.begin(),s1.end());
        string s="";
        for(int i=0;i<s2.length();i++){
            s=s2.substr(i,s1.length());
            
        sort(s.begin(),s.end());
            if( s1==s)
                return 1;
        }
        return 0;
    }
};