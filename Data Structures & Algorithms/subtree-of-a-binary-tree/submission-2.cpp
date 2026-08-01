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

    bool checkNodes(TreeNode* root, TreeNode* subRoot){

        if(!subRoot && !root) return true;

        if(!subRoot || !root) return false;
        
        if(root->val != subRoot->val){
            return false;
        }

       

        bool left=checkNodes(root->left,subRoot->left);
        bool right=checkNodes(root->right,subRoot->right);

        return left && right;

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        

        if(!root) return false;

        if(root->val==subRoot->val){
             if(checkNodes(root,subRoot)){
                return true;
            }
        }
        
        bool left=isSubtree(root->left,subRoot);
        bool right=isSubtree(root->right,subRoot);

        return left || right;
        
    }
};
