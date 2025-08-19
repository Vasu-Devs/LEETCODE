class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map;
        int c,mc=1;
        if(nums.size()==0) return 0;
        for(int i : nums){
            map[i]=1;
        }
        for(auto i : map){
            if(!map.count(i.first-1)){
                c=1;
                int j=i.first+1;
                while(map.count(j)){
                    c++;
                    j++;
                }
                mc=max(c,mc);
            }
        }
        return mc;
    }
};