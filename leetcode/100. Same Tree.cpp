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
    vector<int> x;
    vector<int> y;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // basically same question as before jsut we dont do mirroring
        // and the function given has 2 nodes taken 
        // first thing is the edge case if it is only 1 element 
        // first lets just try getting the values of p in an array
        if (!p && !q) return true;
        if (!p || !q) return false;
       
        bool x =isSameTree(p->left,q->left);
        bool y = isSameTree(p->right,q->right);
        if (p->val == q->val)  return x && y;
        //if (p->val == q->val) return  isSameTree(p->left,q->left) &&  isSameTree(p->right,q->right);
        return false;

        // allright p and q are two trees
        // we compare the left node of p and q and then the right node of p and q 
        // didntcheck values 
    }
};  
/*
    vector<int> dfsx(TreeNode* n1) {
        if (!n1) return {};
        int left1 = dfsx(n1->left);
        int right1 = dfsx(n1->right);
        x.push_back(left1);
        x.push_back(right1);
        return x;
    }
    vector<int> dfsy(TreeNode* n1) {
        if (!n1) return {};
        int left2 = dfsy(n1->left);
        int right2 = dfsy(n1->right);
        y.push_back(left2);
        y.push_back(right2);
        return y;
    }
};
*/
// allright i dont know what to do but i still got here without looking at the solution of this question
