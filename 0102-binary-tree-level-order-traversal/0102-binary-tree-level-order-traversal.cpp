class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
           if(root==NULL)
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++)
            {                TreeNode* temp=q.front();
                level.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};