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
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        string s;
        if(root==NULL)
            return vec;
        dfs(root,vec,s);
        return vec;
    }
    void dfs(TreeNode* root,vector<string> &vec,string s){
        if (root->left==NULL&&root->right==NULL) {
            s = s + to_string(root->val);
            vec.push_back(s);
        }
        if (root->left) {
            dfs(root->left, vec, s+to_string(root->val)+"->");
        }
        if (root->right) {
            dfs(root->right, vec, s+to_string(root->val)+"->");
        }
    }
};
