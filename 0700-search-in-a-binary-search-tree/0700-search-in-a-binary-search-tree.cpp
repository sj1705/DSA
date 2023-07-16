class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode * ans=NULL;
        if(root==NULL) return ans;
        while(root)
        {
            if(root->val==val){
                ans=root;
            break;}
            else if(root->val>val)
                root=root->left;
            else
                root=root->right;
        }
        return ans;
    }
};

