/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        int maxi=0;
       for(Node * node: root->children)
       {
        maxi=max(maxi,maxDepth(node));
       }
       return 1+maxi;
    }
};