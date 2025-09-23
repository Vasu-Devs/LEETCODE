// class Solution {
// public:
//     string removeDuplicateLetters(string s) {
//         unordered_map<int,int> occ;
//         stack<char> r;
//         for(int i=0;i<s.length();i++) occ[s[i]]=i;


//         for(int i=0;i<s.length();i++){
//                 if(r.empty()) r.push(s[i]);
//                 else{
//                     if(r.top()>s[i]){
//                         if(occ[s[i]]<=i) r.push(s[i]);
//                         else{
//                             r.pop();
//                             r.push(s[i]);
//                         }
//                     }
//                 }
//         }

//     }
// };
class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        int lastIndex[26];
        for (int i = 0; i < n; i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        vector<bool> visited(26, false);
        string ans = "";

        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (visited[c - 'a']) continue;

            while (!ans.empty() && ans.back() > c && lastIndex[ans.back() - 'a'] > i) {
                visited[ans.back() - 'a'] = false;
                ans.pop_back();
            }

            ans.push_back(c);
            visited[c - 'a'] = true;
        }

        return ans;
    }
};