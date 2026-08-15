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
    void solve(TreeNode* root, int targetSum,int sum,bool &ans){
        //base case
        if(root==NULL){
            
            return;
        }
        sum+=root->val;
        if(sum==targetSum && root->left==NULL && root->right==NULL){
                ans=true;
            }
        solve(root->left,targetSum,sum,ans);
        solve(root->right,targetSum,sum,ans);
     
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
     
     if(root==NULL){
        return false;
     }
     int sum=0;
     bool ans=false;
     solve(root,targetSum,sum,ans);
     return ans;
    }
};