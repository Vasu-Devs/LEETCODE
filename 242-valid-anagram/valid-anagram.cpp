class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        for(char i : s)
            freq[i-'a']++;

        for(char i : t)
            freq[i-'a']--;
        
        for(int i: freq)
            if(i!=0) return 0;
        
        return 1;
        

    }
};