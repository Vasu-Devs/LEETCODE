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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr)
            return new TreeNode(val);

        TreeNode* temp = root;
        TreeNode* parent = nullptr;
    
        while(temp){
            parent=temp;
            if(val < temp->val ) temp=temp->left;
            else if(val > temp->val) temp = temp->right;
        }
        if(val < parent->val) parent->left = new TreeNode(val);
        else parent->right = new TreeNode(val);

        return root;
    }
};