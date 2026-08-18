class Solution {
public:
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;

        if(root == p || root == q) return root;

        TreeNode* left = helper(root->left, p, q);
        TreeNode* right = helper(root->right, p, q);

        if(left != NULL && right != NULL)
            return root;

        if(left != NULL)
            return left;
        
        return right;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return helper(root, p, q);
    }
};