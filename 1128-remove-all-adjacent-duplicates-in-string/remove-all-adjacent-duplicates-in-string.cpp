class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> r;
        for(char i : s){
            if(!r.empty() && r.top()==i) r.pop();
            else r.push(i);
        }
        string result="";
        while(!r.empty()){
            result+=r.top();
            r.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};