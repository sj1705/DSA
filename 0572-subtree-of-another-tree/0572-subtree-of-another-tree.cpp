class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){
            return false;
        }
        if(isSame(root, subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    bool isSame(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot){
            return true;
        }
        if(!root || !subRoot){
            return false;
        }
        if(root->val != subRoot->val){
            return false;
        }
        return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
    }


};