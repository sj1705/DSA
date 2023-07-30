class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
   return   construction(preorder,i,INT_MAX);
     } 
    TreeNode* construction(vector<int>& preorder,int &i,int bound) 
    {
        if(i==preorder.size()||preorder[i]>bound)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=construction(preorder,i,root->val);
        root->right=construction(preorder,i,bound);
        return root;
    }
};