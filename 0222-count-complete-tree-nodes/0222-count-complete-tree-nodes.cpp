class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root)return 0;
        int lh=0;
        TreeNode*l=root,*r=root;
        while(l){
            lh++;
            l=l->left;
        }
        int rh=0;
        while(r){
            rh++;
            r=r->right;
        }
        if(lh==rh)return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};