class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        if(num.size()==1 && k>0)
            return "0";



        for(auto i : num){
            while(!s.empty() && s.top()>i && k>0){
                s.pop();
                k--;
            }

            s.push(i);
        }
        while (k-- > 0 && !s.empty())
            s.pop();

        string r;
        while(!s.empty()){
            r+=s.top();
            s.pop();
        }
        reverse(r.begin(),r.end());
        while (!r.empty() && r[0] == '0')
            r.erase(0, 1);
        if(r=="") return "0";
        return r;
    }
};