class Solution {
public:
    void inorder(TreeNode* root, int &k, TreeNode* &result) {
        if (root == NULL || k == 0)
            return;
        
        inorder(root->left, k, result);
        
        if (--k == 0) {
            result = root;
            return;
        }
        
        inorder(root->right, k, result);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* result = NULL;
        inorder(root, k, result);
        return result->val;
    }
};
