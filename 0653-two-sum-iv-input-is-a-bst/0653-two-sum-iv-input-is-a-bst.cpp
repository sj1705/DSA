#include <stack>
#include <algorithm>

class BSTiterator {
private:
    std::stack<TreeNode*> st;
    bool rev;

    void pushAll(TreeNode* node) {
        while (node != NULL) {
            st.push(node);
            if (rev) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
    }

public:
    BSTiterator(TreeNode *root, bool isrev) {
        rev = isrev;
        pushAll(root);
    }

    bool hasnext() {
        return !st.empty();
    }

    int next() {
        TreeNode *temp = st.top();
        st.pop();

        if (rev) {
            pushAll(temp->left);
        } else {
            pushAll(temp->right);
        }
        return temp->val;
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (root == nullptr) {
            return false;
        }

        BSTiterator l(root, false);
        BSTiterator r(root, true);

        int i = l.next();
        int j = r.next();

        while (i < j) {
            if (i + j == k) {
                return true;
            } else if (i + j < k) {
                if (l.hasnext()) {
                    i = l.next();
                } else {
                    break;
                }
            } else {
                if (r.hasnext()) {
                    j = r.next();
                } else {
                    break;
                }
            }
        }
        return false;
    }
};