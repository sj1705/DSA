class Solution {
public:
    int c=0,ans;
    void helper(TreeNode * root, int k)
    {
        if(root==NULL) return ;
        helper(root->left,k);
        c++;
        if(c==k) ans=root->val;
        helper(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {

        helper(root,k);
        return ans;
    }
};