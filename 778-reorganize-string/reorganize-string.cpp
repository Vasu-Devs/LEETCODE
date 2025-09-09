class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        string ans(s.length(),'_');
        string s1;
        for(char i : s){
            freq[i]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto x : freq) pq.push({x.second,x.first});

        if(pq.top().first>ceil(s.length()/2.0)) return "";

        while(!pq.empty()){
            auto top=pq.top();
            for(int i=0;i<top.first;i++) s1+=top.second;
            pq.pop();
        }

        int j=0;
        for(int i=0;i<s1.length();i+=2) ans[i]=s1[j++];

        for(int i=1;i<s1.length();i+=2) ans[i]=s1[j++];

        return ans;
    }
};