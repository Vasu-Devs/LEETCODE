class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char> h;
        // int l=0,r=0;
        // int m=0;
        // while(r<s.length()){
        //     if(h.find(s[r])==h.end()){
        //         h.insert(s[r]);
        //         m=max(m,r-l+1);
        //         r++;
        //     }
        //     else{
        //         h.erase(s[l]);
        //         l++;
        //     }
        // }
        //     return m;


        vector<int> h(128, 0); 
        int l=0,r=0;
        int m=0;
        while(r<s.length()){
            if(h[s[r]]==0){  
                h[s[r]]++;  
                m=max(m,r-l+1); 
                r++;
            }
            else{
                
                h[s[l]]--;
                l++;
            }
        }
        return m;
        
    }
};