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
bool ischeck(TreeNode* Left , TreeNode* Right ){
    if(Left ==NULL && Right ==NULL) {
        return true ;
    }

    if(Left ==NULL || Right ==NULL){

        return false ;
    }
    if(Left->val!=Right->val){
        return false ;
    }
    return ischeck(Left->left,Right->right) && ischeck(Right->left,Left->right) ;
}
    bool isSymmetric(TreeNode* root) {
        bool n = ischeck(root->left,root->right) ;
        return n ;
    }
};