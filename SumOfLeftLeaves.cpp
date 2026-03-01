#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL) return 0;

        int sum = 0;

        // If left child exists and is a leaf
        if (root->left &&
            root->left->left == NULL &&
            root->left->right == NULL) {
            
            sum += root->left->val;
        }

        // Recursively calculate for left and right subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};

int main() {
    /*
            3
           / \
          9   20
             /  \
            15   7
    */

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    int result = sol.sumOfLeftLeaves(root);

    cout << "Sum of Left Leaves: " << result << endl;

    return 0;
}