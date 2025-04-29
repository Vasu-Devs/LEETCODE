class Solution {
    public:
        bool isPrefixString(string s, vector<string>& words) {
            string s1="";
            int l1=s.length();
            for(int i=0;i<words.size();i++){
                s1+=words[i];
                int l=s1.length();
                if(l>l1)
                    return 0;
                if(s1==s)
                    return 1;
            }
        return 0;
        }
    };