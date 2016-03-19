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
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> res;
         vector<int> result;
        vector<int> temp;
        queue<TreeNode *> que;
        if(root==NULL)
            return result;
        que.push(root);
        while(!que.empty()){
            int count = que.size();
            temp.clear();
            for(int i=0;i<count;i++){
                TreeNode *node = que.front();
                que.pop();
                temp.push_back(node->val);
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
            res.push_back(temp);
        }
       
        for(int i=0;i<res.size();i++){
            result.push_back(res[i][res[i].size()-1]);
        }
        return result;
    }
};
