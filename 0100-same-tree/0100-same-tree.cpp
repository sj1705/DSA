class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        // if one of the tree is NULL
        if(p == NULL || q == NULL)
            return p == q;

        bool left = isSameTree(p->left , q->left);
        bool right = isSameTree(p->right , q->right);
        
        return (p->val == q->val) && left && right;
    }
};