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
    int ans=0;
    int currans=0;
    void dfs(TreeNode* root){
        if(!root){
            ans=max(ans,currans);
            return;
        }

        currans++;
        dfs(root->left);
        dfs(root->right);
        currans--;

    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        dfs(root);
        return ans;
    }
};
