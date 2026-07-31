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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,map<int,vector<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        if(root==NULL){
            return ans;
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
           pair<TreeNode*,pair<int,int>> temp=q.front();
           q.pop();
           TreeNode* frontnode=temp.first;
           int hd=temp.second.first;
           int level=temp.second.second;

           nodes[hd][level].push_back(frontnode->val);
           if(frontnode->left){
            q.push(make_pair((frontnode->left),make_pair(hd-1,level+1)));
           }
            if(frontnode->right){
            q.push(make_pair((frontnode->right),make_pair(hd+1,level+1)));
           }

        }
      for(auto i : nodes){
    vector<int> col;

    for(auto j : i.second){
        sort(j.second.begin(), j.second.end());

        for(int x : j.second){
            col.push_back(x);
        }
    }

    ans.push_back(col);
}
return ans;
    }
};