class Solution {
public:
 void helper(TreeNode* root,vector<int>&ans){
    if(root==NULL) return ;
    helper(root->left,ans);
    ans.push_back(root->val);
    helper(root->right ,ans);
 }
    bool isValidBST(TreeNode* root) {
        vector<int> ans ;
        vector<int>v ;
        helper(root,ans);
        v = ans;
        sort(v.begin(),v.end());

        for(int i = 1; i < v.size(); i++){
            if(v[i] == v[i-1])
                return false;
        }

        if(v==ans) return true ;
        else return false ;
    }
};