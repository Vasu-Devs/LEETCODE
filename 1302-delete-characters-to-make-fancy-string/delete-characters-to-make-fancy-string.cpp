class Solution {
public:
    string makeFancyString(string s) {
        string fancy="";
        fancy+=s[0];
        int c=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else c=1;
            if(c<=2) fancy+=s[i];
        }
        return fancy;
        
    }
};