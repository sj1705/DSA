class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //similar as level order traversal (we use queue) but here we use flag to change whenever we have to change the direction, and then we vector<vector<int>> to store answer  
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int flag=1;
        while(!q.empty()){

            int size=q.size();//stores the size of queue
            vector<int>temp(size);//temp vector stores the all nodes value of particular level 
            for(int i=0;i<size;i++){//i=0 to size
                //storing the front most element of queue in node
                TreeNode*node=q.front();
                //popping the front elemenet in queue
                q.pop();

                if(flag==1){
                    //then store left to right
                   temp[i]=node->val;
                }else{
                    //if flag==0 then store right to left
                    temp[size-i-1]=node->val;
                }
                //pushing the left and right of nodes 
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            //if flag==1 then left to right, now we change to 0 to indicate its time for right to left, similarly vice versa
            flag=!flag;
            //pusshing the temp vector
            ans.push_back(temp);
        }
        return ans;
    }
};