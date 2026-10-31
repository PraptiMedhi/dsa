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
    int ans;

    pair<int,int> dfs(TreeNode* root, int start) {
        if (root == nullptr) {
            return {0, 0};
        }

        pair<int,int> left = dfs(root->left, start);
        pair<int,int> rt = dfs(root->right, start);

        if (root->val == start) {
            ans = max(ans, max(left.first, rt.first));
            return {1, 1};
        }

        if (left.second == 0 && rt.second == 0) {
            return {1 + max(left.first, rt.first), 0};
        }

        if (left.second == 1) {
            ans = max(ans, rt.first + left.first);
            return {left.first + 1, 1};
        }

        ans = max(ans, left.first + rt.first);
        return {rt.first + 1, 1};
    }

    int amountOfTime(TreeNode* root, int start) {
        ans = 0;
        dfs(root, start);
        return ans;
    }
};