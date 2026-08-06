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
    vector<vector<int>> ans;
    int i=0;

    void bfs(TreeNode* root,int i){
        if(!root){
            return;
        }
        if (i == ans.size()) {
            ans.push_back({});
        }

        ans[i].push_back(root->val);

        bfs(root->left,i+1);
        bfs(root->right,i+1);

        return;

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        bfs(root,i);
        return ans;

    }
};
