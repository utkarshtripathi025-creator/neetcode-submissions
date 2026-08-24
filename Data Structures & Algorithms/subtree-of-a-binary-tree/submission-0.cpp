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

class Solution {
public:

    bool isIdentical(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL)
            return true;

        if(root == NULL || subRoot == NULL)
            return false;

        if(root->val != subRoot->val)
            return false;

        return isIdentical(root->left, subRoot->left) &&
               isIdentical(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        // subRoot khatam ho gaya => mil gaya
        if(subRoot == NULL)
            return true;

        // root khatam ho gaya but subRoot abhi baaki hai
        if(root == NULL)
            return false;

        // Current node se subtree match karne ki koshish
        if(root->val == subRoot->val && isIdentical(root, subRoot))
            return true;

        // Left ya right subtree mein search karo
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
