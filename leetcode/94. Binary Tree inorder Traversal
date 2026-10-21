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
    vector<int> x; // x is basically solution set
    vector<int> inorderTraversal(TreeNode* root) {
        //basically trying to fix the edge case
        if (!root) return {}; // okay we removed the 0 here so it returns void instead
        // we just check if the tree is empty and then return nothing if it is 
        // we move left 
        inorderTraversal(root -> left);
        // allright now we take push back here into x 
        x.push_back(root->val);
        // now we move right
        inorderTraversal(root -> right);
        // now we return x 
        // when we return x it will recusively build x from left most node to right node
        return x;
        // allright case 3 is an edge case what if there is nothing 

        
        // i forgot that i could add elemetns to a vector without index coz its dynamic
        // so i just need to push back the value into x 
        

        //inorderTraversal(root -> left);
        //inorderTraversal(root -> right);
        // now dfs is implemeted yes i know only 3 lines its that beautiful
        // basically that element should be started with that has left as null
        
        //return x;
        

    }
};

// from this question i understand that i have to keep taking the left side of tree
// and then reporting its value 
// lets try a basic dfs via recursion
