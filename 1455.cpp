class Solution {
    public:
        int isPrefixOfWord(string sentence, string searchWord) {
            int n1=searchWord.length();
            stringstream ss(sentence);
            vector<string> s;
            string a;
           
            while(ss>> a){
                s.push_back(a);
            }
           for(int i=0;i<s.size();i++){
                if(s[i].substr(0,n1)==searchWord)
                    return i+1;
           }
           return -1;
        }
    };