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
    int getMinimumDifference(TreeNode* root) {
        vector<int> sot;
        inorder(root,sot);
        int i=0,j=1;
        int m=INT_MAX;
        while(j<sot.size()){
            m=min(m,sot[j]-sot[i]);
            i++;
            j++;
        }
        return m;
    }
    void inorder(TreeNode* root , vector<int>& sot){
        if (!root) return;

        inorder(root->left,sot);
        sot.push_back(root->val);
        inorder(root->right,sot);

    }
};