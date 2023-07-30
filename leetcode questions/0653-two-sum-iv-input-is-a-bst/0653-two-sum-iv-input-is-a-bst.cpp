class Solution {
public:
    set<int>s; // created a set
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr) return false;
        if(s.find(k-root->val)!=s.end()) return true; // searching for the element that sums upto k in the set.
        s.insert(root->val); // if element is not present, inserting root's value in the set.
        return findTarget(root->left,k) || findTarget(root->right,k); // recursively rearching in the left and right subtree. Returning true if solution is find on either of side.
    }
};