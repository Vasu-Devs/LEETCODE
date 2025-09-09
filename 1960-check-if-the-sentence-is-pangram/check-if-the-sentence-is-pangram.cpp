class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26]={0};
        for(char i : sentence) freq[i-'a']++;
        for(int i : freq) if(i==0) return false;
        return true;

    }
};