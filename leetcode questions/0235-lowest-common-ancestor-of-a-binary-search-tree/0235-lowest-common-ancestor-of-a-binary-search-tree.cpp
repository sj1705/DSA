class Solution {
public:
    
    int lca(TreeNode* root, int p, int q){
        if(!root)
            return -1;
        if(root -> val == p || root -> val == q)
            return root -> val;
        int a = lca(root -> left, p, q);
        int b = lca(root -> right, p, q);
        if(a != -1 && b != -1)
            return root -> val;
        else if(a != -1)
            return a;
        else if(b != -1)
            return b;
        else 
            return -1;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int ans = lca(root, p -> val, q -> val);
        TreeNode *temp = new TreeNode(ans);
        return temp;
    }
};