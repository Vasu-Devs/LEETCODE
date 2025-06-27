class Solution {
public:
    bool canConstruct(string r, string m) {
    //    unordered_map<char,int> fm;
    //    for(char i : r){
    //         fm[i]++;
    //    }
    //    for(char i : m){
    //         fm[i]--;
    //    }
    //    for(const auto& i : fm){
    //         if(i.second>0)
    //             return 0;
    //    }
    //    return 1;

    int fa[26]={0};
    for(char i : r){
        fa[i-'a']++;
    }
    for(char i:m){
        if(fa[i-'a']>0)
            fa[i-'a']--;
    }
    for(int i=0;i<26;i++){
        if(fa[i]>0)
            return 0;
    }
    return 1;


    }
};