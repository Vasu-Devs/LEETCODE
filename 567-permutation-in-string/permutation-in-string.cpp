class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        array<int,26> fm= {0};
        array<int,26> sm;
        
        
        for(char i : s1 ) fm[i-'a']++;
        
        for(int i=0;i<s2.length();i++){
            sm=fm;
            if(comp(s1,s2.substr(i,s1.length()),sm))
                return 1;
        }
        return 0;
    }
    bool comp(string s1, string s,array<int, 26>& fm){
        
        for(char i : s ) fm[i-'a']--;

        for(int i : fm ){
            if(i>0)
                return 0;
        }
        return 1;
    }
};