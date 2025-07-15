/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;

        if(root->val<low)   return rangeSumBST(root->right,low,high);
        if(root->val>high) return rangeSumBST(root->left, low , high);

        return root->val + rangeSumBST(root->left, low , high) + rangeSumBST(root->right, low , high);
    //     vector<int> sot;
    //     inorder(root,sot);
    //     int i;
    //     long long s=0;
    //     for(i=0;i<sot.size();i++){
    //         if(sot[i]>=low)
    //             break;
    //     }
    //     while(i<sot.size() && sot[i]<=high){
    //         s+=sot[i];
    //         i++;
    //     }
    //     return s;
        
    // }
    // void inorder(TreeNode* root , vector<int>& sot){
    //     if (!root) return;

    //     inorder(root->left,sot);
    //     sot.push_back(root->val);
    //     inorder(root->right,sot);
    }
};