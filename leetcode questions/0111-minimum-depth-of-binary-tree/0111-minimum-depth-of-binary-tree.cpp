class Solution {
public:
    
    int depth(TreeNode* root){
        if(root==NULL) return INT_MAX;
        
        if(root->left==NULL && root->right==NULL) return 1;
        int x=depth(root->left);
        int y=depth(root->right);
        
        return min(x,y)+1;
    } 
    
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return depth(root);
    }
};