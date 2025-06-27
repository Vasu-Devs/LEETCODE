class Solution {
public:
    bool canConstruct(string r, string m) {
       unordered_map<char,int> fm;
       for(char i : r){
            fm[i]++;
       }
       for(char i : m){
            fm[i]--;
       }
       for(const auto& i : fm){
            if(i.second>0)
                return 0;
       }
       return 1;


    }
};