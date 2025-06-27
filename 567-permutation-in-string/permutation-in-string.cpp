class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        
      
        string s="";
        for(int i=0;i<s2.length();i++){
            s=s2.substr(i,s1.length());
            
        
            if(comp(s1,s))
                return 1;
        }
        return 0;
    }
    bool comp(string s1, string s){
        int fm[26] = {0};
        for(char i : s1 ) fm[i-'a']++;
        for(char i : s ) fm[i-'a']--;

        for(int i : fm ){
            if(i>0)
                return 0;
        }
        return 1;
    }
};