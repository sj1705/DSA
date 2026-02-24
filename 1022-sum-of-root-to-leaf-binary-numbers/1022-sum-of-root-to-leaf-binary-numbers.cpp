class Solution {
public:
    int solve(TreeNode* root, int val )
    {
        if(root==NULL)
            return 0;
        val=(2*val) + root->val;
        if(root->left == NULL && root->right == NULL) return val;
        return solve(root->left,val) + solve(root->right,val);
    }
    int sumRootToLeaf(TreeNode* root) {
        return solve(root,0);
    }
};