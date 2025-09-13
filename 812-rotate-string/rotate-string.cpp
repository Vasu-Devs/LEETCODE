class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string n = s+s;
        return n.find(goal) != string::npos;

    }
};