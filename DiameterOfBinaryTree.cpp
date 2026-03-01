#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // Update diameter
        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};

int main() {
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    int result = sol.diameterOfBinaryTree(root);

    cout << "Diameter of Binary Tree: " << result << endl;

    return 0;
}