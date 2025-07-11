class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // unordered_map<int,int> nge;
        // for(int i=0;i<nums2.size();i++){
        //     for(int j=i+1;j<nums2.size();j++){
        //         if(nums2[i]<nums2[j]){
        //             nge[nums2[i]]=nums2[j];
        //             break;
        //         }
        //     }
        //     if(nge.find(nums2[i])==nge.end())
        //         nge[nums2[i]]=-1;
        // }
        // for(int i=0;i<nums1.size();i++){
        //     nums1[i]=nge[nums1[i]];
        // }
        // return nums1;


        // USING MONOTONIC STACK
        stack<int> s;
        unordered_map<int,int> nge;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<nums2[i])
                s.pop();
            
            if(!s.empty())
                nge[nums2[i]]=s.top();
            else
                nge[nums2[i]]=-1;
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=nge[nums1[i]];
        }
        return nums1;
    }
};