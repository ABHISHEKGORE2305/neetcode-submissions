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

    int rootval;
    int maxi;
    

    void dfs(TreeNode* root,int maxi,int &cnt){
        if(!root){
            return;
        }
        if(root->val>=rootval && root->val>=maxi){
            cnt++;
            maxi=root->val;
        }

        dfs(root->left,maxi,cnt);
        maxi=max(root->val,maxi);
        dfs(root->right,maxi,cnt);

        return;

    }

    int goodNodes(TreeNode* root) {
        rootval=root->val;
        int cnt=0;
        dfs(root,-101,cnt);
        return cnt ;
    
    }
};
