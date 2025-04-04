class Solution {
private:
    vector<TreeNode*>vec; //to store all deep leaf nodes
    int height(TreeNode*root){ //to get deepest height
        if(!root)return 0;

        return 1+max(height(root->left),height(root->right));
    }

    bool leaf(TreeNode*root){  //to get leaf
        if(!root->left and !root->right)return true;
        return false;
    }

    void nodes(TreeNode*root,int h,int maxh){ //to fill our vector vec
        if(!root)return;
        if(leaf(root) and h==maxh)vec.push_back(root);
        nodes(root->left,h+1,maxh);
        nodes(root->right,h+1,maxh);
    }

  TreeNode* solve(TreeNode*root){  //lca problem of 2 node , just same
      if(!root)return NULL;
        for(auto&it:vec){  //this is modification, here we cheking for ( if any node is equal to root)
            if(root==it)return root;
        }
        TreeNode*l=solve(root->left);
        TreeNode*r=solve(root->right);

            if(l and r)return root;
            else if(!r and l)return l;
            else if(!l and r)return r;
            else return NULL;
            
  }  
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int h=height(root);
        nodes(root,1,h);
        return solve(root);
    }
};