class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inList;
        for(int i=0;i<inorder.size();i++){
            inList[inorder[i]]=i;
        }
        TreeNode* root=buildTrees(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inList);
        return root;
    }

    TreeNode* buildTrees(vector<int> preorder,int preStart,int preEnd,vector<int> inorder,int inStart,int inEnd,map<int,int> &inList){



        if(preStart>preEnd || inStart>inEnd)return NULL;

        TreeNode* root=new TreeNode(preorder[preStart]);

        int inRoot=inList[preorder[preStart]];
        int inLeft=inRoot-inStart;

        root->left=buildTrees(preorder,preStart+1,preStart+inLeft,inorder,inStart,inStart+inLeft,inList);
        root->right=buildTrees(preorder,preStart+inLeft+1,preEnd,inorder,inRoot+1,inEnd,inList);

        return root;

    }
};