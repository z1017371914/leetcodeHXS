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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> temp;
        queue<TreeNode *> que;
        if(root==NULL)
            return res;
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
        int start = 0;
        int end = res.size()-1;
        while(start<end){
            vector<int> temp;
            temp = res[start];
            res[start] = res[end];
            res[end] = temp;
            start++;
            end--;
        }
        return res;
    }
};
