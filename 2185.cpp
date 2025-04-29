class Solution {
    public:
        int prefixCount(vector<string>& words, string pref) {
            int c=0,n1=pref.length();
            for(int i=0;i<words.size();i++){
                if(words[i].substr(0,n1)==pref){
                    c++;
                }
            }
            return c;
        }
    };