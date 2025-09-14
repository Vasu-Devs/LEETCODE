class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         int c=0,i;
//         sort(nums.begin(), nums.end());

// nums.erase(unique(nums.begin(), nums.end()), nums.end());
//         int n=nums.size();

//         for(i=0;i<n;i++){
//             c++;
//         }
//         return c;
// set<int> s(nums.begin(),nums.end());
// nums.assign(s.begin(),s.end());
// return s.size();


int s=0;
int f=1;
for(int f=1;f<nums.size();f++){
    if(nums[s]!=nums[f])
        s++;
        nums[s]=nums[f];
    
}
return s+1;
    }
};