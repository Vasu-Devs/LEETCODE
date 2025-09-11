class Solution {
public:
    string sortVowels(string s) {
        string sr="";
        for(int i=0;i<s.size();i++){
              if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
    s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
                sr+=s[i];
                s.replace(i,1,"-");
            }
        }
        sort(sr.begin(),sr.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-')
            s.replace(i, 1, 1, sr[j++]);

        }
    return s;
    }
};