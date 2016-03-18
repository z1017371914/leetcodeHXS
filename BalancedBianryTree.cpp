/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(getDepth(root)!=-1)
            return true;
    }
    int getDepth(TreeNode* root){ ///函数功能如果是平衡树的话，返回深度，如果不是返回高度
        if(root==NULL)
            return 0;
        int leftDepth = getDepth(root->left);
        int rightDepth = getDepth(root->right);
        if(leftDepth==-1||rightDepth==-1||abs(rightDepth-leftDepth)>1)
            return -1;
        return max(leftDepth,rightDepth)+1;
            
        
    }
};
