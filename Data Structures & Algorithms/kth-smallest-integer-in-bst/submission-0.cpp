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
    int k_val;

    void dfs(TreeNode* root,int k){
        if(!root){
            return  ;
        }
        

        dfs(root->left,k_val);
        k_val--;

        if(k_val==0){
            ans=root->val;
            return;
        };
        
        dfs(root->right,k_val);

        return ;

    }
    int kthSmallest(TreeNode* root, int k) {
        k_val=k;
        dfs(root,k_val);
        return ans;
    }
};
