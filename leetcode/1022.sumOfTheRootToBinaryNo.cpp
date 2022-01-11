/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// in this case we have to do is to just do inorder traversal
// with simple backtracking to pop and store all possible sequences
// take care of taking both root->next as null and then store that valiue inside it

class Solution
{
public:
    TreeNode *head;
    vector<int> v;
    vector<vector<int>> ans;
    int sumRootToLeaf(TreeNode *root)
    {
        head = root;
        int anss = 0;
        inorder(root);
        for (int i = 0; i < ans.size(); i++)
        {
            int t = 1;
            for (int j = ans[i].size() - 1; j >= 0; j--)
            {
                cout << ans[i][j] << " ";
                anss += ans[i][j] * t;
                t *= 2;
            }
            cout << endl;
        }

        return anss;
    }

    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        v.push_back(root->val);
        if (!root->left && !root->right)
        {
            ans.push_back(v);
        }
        if (root)
        {
            // v.push_back(root->val);
            // cout<<root->val<<" ";
            if (root->left)
                inorder(root->left);
            if (root->right)
                inorder(root->right);
            v.pop_back();
        }
    }
};