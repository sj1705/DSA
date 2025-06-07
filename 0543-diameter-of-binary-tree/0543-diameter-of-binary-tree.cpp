
class Solution {
public:
    int f(int &maxi, TreeNode* root )
    {
        if (root==NULL) return 0;
        
        int lh=f(maxi,root->left);
        int rh= f(maxi,root->right);
        
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=-1;
        f(maxi,root);
        return maxi;
    }
};