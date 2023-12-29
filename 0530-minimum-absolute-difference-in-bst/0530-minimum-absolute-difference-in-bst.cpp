class Solution {
public:
    int res=INT_MAX;
    vector<int> temp;
    void inorder(TreeNode* root){

        if(!root){
            return;
        }
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);

    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        for(int i=0;i<temp.size()-1;i++){
            res=min(res,temp[i+1]-temp[i]);
        }
        return res;
    }
};