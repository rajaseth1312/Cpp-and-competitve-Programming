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
    bool isSymmetric(TreeNode* root) {
        // we should use a BFS here coz 1 then it sees 2 and 2 then it seees 3 4 4 3 
        return isMirror(root->left, root->right);
        // okay we need to make another function so we can work on 2 nodes 


        // how do i run 2 dfs at the same time like eh ?
        // i got the bfs with palindrome right never implemented a bfs yet
    }
    bool isMirror(TreeNode* n1, TreeNode* n2){
        if (!n1 && !n2) {
            return true;
        }
        if (!n1 || !n2) {
            return false;
        }

        return n1->val == n2->val && isMirror(n1->left , n2->right) && isMirror(n1->right,n2->left);
    }
};

// i still wanna see the bfs case too

/* using bfs

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    queue<pair<TreeNode*, TreeNode*>> levels;
    // basically adds a pair into the queue
    // add the left root and right root into the queue
    levels.push({root->left, root->right});
    while(!levels.empty()) {
        TreeNode* L = levels.front().first;
        TreeNode* R = levels.front().second;
        levels.pop();

        // this removes the pair 

        if (!L && !R) continue; // both are null so true

        if (!L || !R) return false; // one is null so false

        if (L-> val != R->val) return false; // checks if values are same

        levels.push({L->left, R->right});
        levels.push({L->right, R->left});
        // we put values into queue like xy yx then we take valeus as yx and then pop 
        // again we push values xy
    
    }
    return true;
    }

// so we use a queue for bfs and recussion for dfs
};
