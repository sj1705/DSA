class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
      if(!root)return NULL;
      if(root->val==key)return helper(root);
      TreeNode*dummy=root;
      while(root){
      if(root->val>key){
          if(root->left!=NULL && root->left->val==key){
              root->left=helper(root->left);
              break;

          }
          else root=root->left;

      }
      else {
          if(root->right!=NULL && root->right->val==key){
              root->right=helper(root->right);
              break;
          }
          else root=root->right;
      }
    }
    return dummy;
    }
   TreeNode* helper(TreeNode*root){
       if(!root->left)return root->right;
       if(!root->right)return root->left;
       TreeNode*rightchild=root->right;
       TreeNode*lastright=findlastright(root->left);
       lastright->right=rightchild;
       return root->left;
   }
   TreeNode*findlastright(TreeNode*root){
       while(root->right)root=root->right;
       return root; 
   }
};