class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // so will you do it here or locally?
        // here but first ill do a pseudo code on copy
        // so what i came up with was like a 2 pointer thingy wher what i do is , each time i will do is , for n times  a loop will work and what it does is , we have one pointer fixed at end and we have another which starts from 0 index and traverses till second last swapping elements
        // lemme just quick code it
        // int s,f;
        // while(k){
        // s=0;
        // f=nums.size()-1;
        // while(s!=nums.size()-1){
        //     swap(nums[s],nums[f]);
        //     s++;
        // }
        // k--;     
        // }
        // what are you trying to do?
      
        // while(k){
        //     nums.insert(nums.begin(),nums[nums.size()-1]);
        //     nums.pop_back();
        //     k--;
        
        // }
        
        reverse(nums.begin(),nums.end());
   
        k=k%nums.size();
        int i=0;
        int j=k-1;
        while(i<j){
            swap(nums[i],nums[j]);
            
            i++;
            j--;
        }
        i=k;
        j=nums.size()-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
       

    }  
   
   
};