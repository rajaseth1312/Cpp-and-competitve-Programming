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
    TreeNode* invertTree(TreeNode* root) {
        // what can we do here 
        // we take left and right nodes and we switch their values and we keep going 
        // sounds simple i guess ? 
        // we use dfs and interchange the nodes values ? 
        // it would be better to use bfs in this case 
        // how do i return a treenode 

        if (!root) return nullptr;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    /// instead of taking a lot of stress we just swap the tree nodes and then go recusively
    // using dfs 
 
    }
};
