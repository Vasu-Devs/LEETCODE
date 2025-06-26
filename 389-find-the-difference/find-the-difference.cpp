class Solution {
public:
    char findTheDifference(string s, string t) {
        // for(char c: s){
        //     if(t.find(c)==string::npos){
        //         return c; 
        //     s.erase(t.find(c),1);       
        // }
        // }
        // for(char c: t){
        //     if(s.find(c)==string::npos){
        //         return c; 
        //     t.erase(s.find(c),1);       
                   
        // }
        // }
        // return ' ';
        unordered_map<char,int> p;
        for(char i : s){
            p[i]++;
        }
        for(char i : t){
            p[i]--;
        }
        for(auto& [k,v] : p){
            if(v==-1)
                return k;
        }
        return ' ';
        
        
    }
};