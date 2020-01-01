/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


// время и память O(n)
/*
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL) return root;
        if (root->val > R) return trimBST(root->left, L, R);
        if (root->val < L) return trimBST(root->right, L, R);
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};
*/

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL) return root;
        TreeNode* mainRoot = root;
        while (root->val != L) {
            if (root->left != NULL)
                root = root->left;
            else
                break;
        }
        root->left = NULL;
        root = mainRoot;
        while (root->val != R) {
            if (root->right != NULL)
                root = root->right;
            else
                break;
        }
        root->right = NULL;
        root = mainRoot;
        return root;
    }
};
