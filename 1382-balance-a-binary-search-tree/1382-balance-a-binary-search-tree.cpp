class Solution {
public:
    // Helper to perform In-order traversal and store nodes in a sorted list
    void Traverse(TreeNode* root, vector<TreeNode*> &sorted) {
        if (!root) return;
        Traverse(root->left, sorted);
        sorted.push_back(root);
        Traverse(root->right, sorted);
    }

    // Helper to build a balanced BST from the sorted vector
    TreeNode* solve(int l, int r, vector<TreeNode*> &sorted) {
        if (l > r) return NULL;

        // Correct midpoint calculation
        int mid = l + (r - l) / 2;
        
        // Reuse the existing node
        TreeNode* root = sorted[mid];
        
        // Recursively build left and right subtrees
        root->left = solve(l, mid - 1, sorted);
        root->right = solve(mid + 1, r, sorted);
        
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> sorted; // Removed parentheses to fix the "Most Vexing Parse"
        Traverse(root, sorted);
        
        int n = sorted.size();
        return solve(0, n - 1, sorted);
    }
};