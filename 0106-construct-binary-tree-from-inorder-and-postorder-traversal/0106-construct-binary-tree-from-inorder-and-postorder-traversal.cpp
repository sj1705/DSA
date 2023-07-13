
class Solution {
public:
    vector<int>inorder;
    vector<int>postorder;
     unordered_map <int , int > indexinorder;
    TreeNode* buildTree(vector<int>& Inorder, vector<int>& Postorder) {
        inorder=Inorder;
        postorder= Postorder;
       
        for(int i=0 ; i< inorder.size(); i++){
            indexinorder[inorder[i]]=i;
        }
        return go(0, postorder.size()-1, 0, inorder.size()-1);
        
    }
    TreeNode* go(int poststart, int postend, int instart, int inend){
        if(poststart>postend || instart>inend){
            return NULL;
        }
        TreeNode* root= new TreeNode(postorder[postend]);
        int indexroot= indexinorder[root->val];
        int eleleft = indexroot - instart;
        root->left= go(poststart, poststart+eleleft-1, instart, indexroot-1);
        root->right= go(poststart+eleleft,postend-1,indexroot+1, inend   );
        return root;
        
    }
};