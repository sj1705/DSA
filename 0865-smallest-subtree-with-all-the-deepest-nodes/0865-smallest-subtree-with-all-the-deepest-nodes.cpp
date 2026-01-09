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
    int maxd=0;
    unordered_map<int,int> mp;
    TreeNode* lca(TreeNode* root)
    {
        if(root==NULL) return root;

        if(maxd==mp[root->val]) return root;

        TreeNode * leftN=lca(root->left);
        TreeNode * rightN=lca(root->right);

        if(leftN==NULL) return rightN;
        else if(rightN==NULL) return leftN;
        else return root;


    }
    void findmaxdept(TreeNode* root,int d)
    {
        if(!root) return ;
        maxd=max(maxd,d);
        mp[root->val]=d;
        findmaxdept(root->left,d+1);
        findmaxdept(root->right,d+1);

    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        findmaxdept(root,0);
        return lca(root);
    }
};