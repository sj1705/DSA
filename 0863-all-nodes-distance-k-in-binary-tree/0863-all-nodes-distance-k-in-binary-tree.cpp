class Solution
{
	public:
		vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
		{
			map<TreeNode*, TreeNode*> parent;
			queue<TreeNode*> q;
			parent[root] = NULL;
			q.push(root);

			// Doing a level-order-traversal to determine the parent nodes
			while (!q.empty())
			{
				int size = q.size();
				while (size-- > 0)
				{
					TreeNode *curr = q.front();
					q.pop();

					if (curr->left != NULL)
					{
						q.push(curr->left);
						parent[curr->left] = curr;
					}
					if (curr->right != NULL)
					{
						q.push(curr->right);
						parent[curr->right] = curr;
					}
				}
			}

			vector<int> ansNodes;

			set<TreeNode*> st;
			q.push(target);
			st.insert(target);

			while (!q.empty() && k-- > 0)
			{
				int size = q.size();
				while (size-- > 0)
				{
					TreeNode *curr = q.front();
					q.pop();
					if (parent[curr] != NULL && (st.find(parent[curr]) == st.end()))
					{
						st.insert(parent[curr]);
						q.push(parent[curr]);
					}
					if (curr->left != NULL && (st.find(curr->left) == st.end()))
					{
						st.insert(curr->left);
						q.push(curr->left);
					}
					if (curr->right != NULL && (st.find(curr->right) == st.end()))
					{
						st.insert(curr->right);
						q.push(curr->right);
					}
				}
			}
			while (!q.empty())
			{
				ansNodes.push_back(q.front()->val);
				q.pop();
			}
			return ansNodes;
		}
};