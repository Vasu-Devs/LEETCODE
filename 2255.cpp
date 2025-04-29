class Solution {
    public:
        int countPrefixes(vector<string>& words, string s) {
            int n1,c=0;
            for(int i=0;i<words.size();i++){
                n1=words[i].length();
                if(s.substr(0,n1)==words[i]){
                    c++;
                }
            }
            return c;
        }
    };