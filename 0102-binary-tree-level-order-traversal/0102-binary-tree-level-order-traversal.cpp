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
   void lorder(TreeNode* root,int curr,int level,vector<int>&v){
    if(root==NULL)return ;
    if(curr==level){
        v.push_back(root->val);
        return ;
    }
    lorder(root->left,curr+1,level,v);
    lorder(root->right,curr+1,level,v);
   }
   int level(TreeNode* root){
    if(root==NULL)return 0 ;
    return 1 + max(level(root->left),level(root->right));
   }
   void print(vector<vector<int>>&ans,TreeNode* root){
    int levels = level(root);
    for(int i =1;i<=levels;i++){
        vector<int>v;
        lorder(root,1,i,v);
         ans.push_back(v);
         cout<<endl ;
    }
   }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        print(ans,root);
        return ans ;
    }
};