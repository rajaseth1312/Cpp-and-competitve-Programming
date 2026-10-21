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
    int minDepth(TreeNode* root) {
        // will try doing the same thing here
        if (!root) return 0;
        int minleft = minDepth(root -> left);
        int minright = minDepth(root -> right);
        if (!minleft || !minright ) return minleft + minright + 1;
        else return min(minleft , minright) + 1;
}  
};
// yep got this working 

// changed the conditions so its not a complete mess 

// eh why ? 
// it passes a normal tree case 
// the first case is null so how do i avoid that 
// half the test case passed 
// i did the same thing but it doesnt pass coz there is anull value at the start

// um this is a questoin of dfs not bfs 
// changing it to max made case 2 pass but case 1 fail


// i dont know how to give upvotes 
