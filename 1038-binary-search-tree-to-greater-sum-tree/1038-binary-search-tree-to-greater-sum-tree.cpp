
class Solution {
public:
    int currsum = 0;
    
    TreeNode* bstToGst(TreeNode* root) {
        // Base case: If we reach a null node, return null
        if (root == nullptr) {
            return nullptr;
        }

        // 1. Recur on the right child (process largest elements first)
        bstToGst(root->right);

        // 2. Process the current node
        currsum += root->val;   // Add the current node's value to the running total
        root->val = currsum;    // Update the current node's value to the new total

        // 3. Recur on the left child (process smaller elements next)
        bstToGst(root->left);

        // Return the modified root
        return root;
    }
};