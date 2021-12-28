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
class Solution
{
public:
    bool isValidBST(TreeNode *root, long long min = LLONG_MIN, long long max = LLONG_MAX)
    {
        //     here we created range in which value can exist if not following that then return false that's it
        if (root == NULL)
            return true;
        else if (root->val <= min || root->val >= max)
            return false;

        // return ((isValidBST(root->left,min,root->left)) && (isValidBST(root->right,root->val,max)));
        return (isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max));
    }
};