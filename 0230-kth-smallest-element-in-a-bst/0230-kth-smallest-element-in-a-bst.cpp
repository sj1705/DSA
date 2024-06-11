class Solution {
public:
    void inorder(TreeNode *root, vector<int> &inorder1) {
        if (root == NULL)
            return;
        inorder(root->left, inorder1);
        inorder1.push_back(root->val); // Push the value, not the TreeNode
        inorder(root->right, inorder1); // Corrected to right
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder1;
        inorder(root, inorder1); // Corrected variable name
        return inorder1[k - 1]; // Corrected indexing
    }
};
