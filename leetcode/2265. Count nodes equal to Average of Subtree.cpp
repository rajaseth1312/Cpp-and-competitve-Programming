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
    int ans = 0;
    pair<int ,int> dfs(TreeNode* root) {
        if (!root) return {0 , 0 };
        auto [ls , lc] = dfs(root -> left);
        auto [rs , rc]= dfs(root -> right); 
        int sum = ls + rs + root->val;
        int count = lc + rc + 1;
        if (sum / count == root->val) ans++;
        return {sum, count};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        // first we use dfs here 
        // taking a variable x to store the sum
        dfs(root);
        return ans;
        // so we need sum of values and count at each node
    }
};
// just the condition makes this a question
// i learned how to implement and use dfs and how to take values from trees 
// how to do recursion
// it still outputs 0 
