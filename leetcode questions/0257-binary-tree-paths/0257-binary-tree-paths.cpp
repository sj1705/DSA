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
    void f(TreeNode * root,vector<string> &ans,string curr)
    {
        if(root==NULL) return;
        if(!root->left && !root->right)
        {
            ans.push_back(curr+"->"+to_string(root->val));
            return;
        }
        f(root->left,ans,curr+"->"+to_string(root->val));
        f(root->right,ans,curr+"->"+to_string(root->val));
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root ==NULL) return ans;
        string curr=to_string(root->val);
        if (! root->left && !root-> right)
        {
            ans.push_back(curr);
            return ans;
        }
        
        f(root->left,ans,curr);
        f(root->right,ans,curr);
        return ans;
    }
};