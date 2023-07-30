class BSTiterator{
    //stack 
    stack<TreeNode*> myStack ;
    //reverse flag for switching between next and before 
    bool reverse = true ;
    //true means before()
    //flase means next()
    
    public:
    //constructor 
    BSTiterator(TreeNode* root , bool isReverse){
        reverse = isReverse ;
        pushAll(root) ; 
    }
    bool hasNext(){
        return !myStack.empty() ; 
    }
    int next(){
        TreeNode* tmp = myStack.top();
        myStack.pop();
        if(reverse==false) pushAll(tmp->right) ;
        else pushAll(tmp->left);
        return tmp->val ; 
    }
    private:
    void pushAll(TreeNode* root){
        for(;root!=NULL;){
            myStack.push(root);
            if(reverse==true){
                root = root->right ; 
            }
            else {
                root = root->left ; 
            }
        }
    }
    
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root)return false ;
        //creating the object 
        //next
        BSTiterator l(root, false) ;
        //beofore 
        BSTiterator r(root , true) ;
        
        int leftpointer = l.next() ;
        int rightpointer = r.next() ; 
        
        //simple twosum problem method 
        while(leftpointer<rightpointer){
            if(leftpointer+rightpointer==k) return true ;
            else if(leftpointer+rightpointer<k) leftpointer=l.next() ;
            else rightpointer = r.next() ;
        }
        return false ; 
        
    }
};