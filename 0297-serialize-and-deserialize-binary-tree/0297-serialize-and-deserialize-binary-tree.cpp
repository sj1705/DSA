class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)return "";
        queue<TreeNode*>q;
        string s="";
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node==NULL)s.append("#,");
            else s.append(to_string(node->val)+',');
            if(node!=NULL){
                q.push(node->left);
                q.push(node->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode* root=new TreeNode(stoi(str));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            getline(s,str,',');
            if(str=="#")node->left=NULL;
            else{
                TreeNode* leftn=new TreeNode(stoi(str));
                node->left=leftn;
                q.push(leftn);
            }

            getline(s,str,',');
            if(str=="#")node->right=NULL;
            else{
                TreeNode* rightn=new TreeNode(stoi(str));
                node->right=rightn;
                q.push(rightn);
            }
        }
        return root;
    }
};