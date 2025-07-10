class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> ts;
        for(char i : s){
            if(i=='#' ){
                if(ss.empty()) continue;
                else ss.pop();
            }
            else ss.push(i);
        }
        for(char i : t){
            if(i=='#'){
                if(ts.empty()) continue;
                else ts.pop();
            }
            else ts.push(i);
        }
        return ss==ts;
    }
};