
class Solution {
public:
    int f(int &maxi, TreeNode * root)
    {
        if(root== NULL) return 0;
        
        int lh=max(0,f(maxi,root->left));
        int rh=max(0,f(maxi,root->right));
        
        maxi=max(maxi,rh+lh+root->val);
        
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=-1e9;
        f(maxi,root);
        return maxi;
    }
};