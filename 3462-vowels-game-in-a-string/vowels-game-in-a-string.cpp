class Solution {
public:
    int isVowel(char c){
          if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
    c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    return 1;
    return 0;
}   
    int vc=0;
    bool doesAliceWin(string s) {
        for(char c:s){
            if(isVowel(c))
                return true;
        }
        return false;
        


        
    }
};