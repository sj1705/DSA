/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int ans = 0;

    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;
        helper(root, targetSum);                   // count paths starting from current node
        pathSum(root->left, targetSum);            // recurse left
        pathSum(root->right, targetSum);           // recurse right
        return ans;
    }

    void helper(TreeNode* node, long long sum) {
        if (!node) return;

        if (node->val == sum) ans++;
        helper(node->left, sum - node->val);
        helper(node->right, sum - node->val);
    }
};
