/*A path in a binary tree is a sequence of nodes where each pair of adjacent nodes
in the sequence has an edge connecting them.
A node can only appear in the sequence at most once.
Note that the path does not need to pass through the root.
The path sum of a path is the sum of the node's values in the path
Given the root of a binary tree, return the maximum path sum of any non-empty path.*/

#include<iostream>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

int recursive(TreeNode* root, int& res)
{
    if(root==NULL)
        return 0;
    int l= max(0,recursive(root->left, res));
    int r= max(0,recursive(root->right,res));
    res= max(res, l+r+root->val);

    return max(l,r)+root->val;
}

int maxPathSum(TreeNode* root) {
    int res= INT_MIN;
    recursive(root, res);
    return res;
}

int main()
 {
     TreeNode* T= new TreeNode(-10);
     T->left= new TreeNode(9);
     T->right= new TreeNode(20);
     T->right->left= new TreeNode(15);
     T->right->right= new TreeNode(7);
     cout<<maxPathSum(T);
 }
