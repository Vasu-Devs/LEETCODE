class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i : nums){
            if(freq.find(i)!=freq.end()) return 1;
            freq[i]++;
        }
        return 0;

    }
};