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
    
        void solve(TreeNode* root, int targetSum,int sum,vector<vector<int>>&ans,vector<int>path){
        //base case
        if(root==NULL){
            return;
        }
        sum+=root->val;
        path.push_back(root->val);
        if(sum==targetSum && root->left==NULL && root->right==NULL){
                ans.push_back(path);
            }
        solve(root->left,targetSum,sum,ans,path);
        solve(root->right,targetSum,sum,ans,path);
        path.pop_back();
     
    
}
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        int sum=0;
        solve(root,targetSum,sum,ans,path);
        return ans;
    }
};