class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //  unordered_set n1(nums1.begin(),nums1.end());   
    //  unordered_set n2(nums2.begin(),nums2.end());  
    //  vector<int> in;
    // unordered_set<int>& small = (n1.size() <= n2.size()) ? n1 : n2;
    // unordered_set<int>& big   = (n1.size() <= n2.size()) ? n2 : n1;

    // for(int i:small){
    //     if(big.find(i)!=big.end())
    //         in.push_back(i);
    //  } 
    //  return in;
    unordered_set s(nums1.begin(),nums1.end());
    vector<int> in;
    for(int i: nums2){
        if(s.erase(i))
            in.push_back(i);
    }
    return in;
    }
};