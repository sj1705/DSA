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
    vector<long long> allSums;
    int getsum(TreeNode* root)
    {
        if (!root) return 0;
        long long currentSum = root->val + getsum(root->left) + getsum(root->right);
        allSums.push_back(currentSum);
        return currentSum;
    }
    int maxProduct(TreeNode* root) {
        long long sum=getsum(root);
        long long maxp=0;
        for (long long s : allSums) {
            long long p = s * (sum - s);
            maxp = max(maxp,p);
        }
        long long MOD = 1e9 + 7;
        return (int)(maxp % MOD);
    }
};