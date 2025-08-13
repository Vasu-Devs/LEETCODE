class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mr;
        for(string i : strs){
            string key=i;
            sort(key.begin(),key.end());
            mr[key].push_back(i);
        } 
        vector<vector<string>>fr;
        for(auto &i : mr){
            fr.push_back(i.second);
        }

        return fr;
        
    }
};