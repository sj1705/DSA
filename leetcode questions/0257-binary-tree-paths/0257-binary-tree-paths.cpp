class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string path = "";
        backtrack(result, path, root); 
        return result;
    }
    void backtrack(vector<string>& result, string path, TreeNode*& root) {
        if (!root) return;

        if (!root->left && !root->right) {
            path += to_string(root->val);
            result.emplace_back(path);
            return;
        }

        path += to_string(root->val) + "->";
        backtrack(result, path, root->left);
        backtrack(result, path, root->right);
    }
};