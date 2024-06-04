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

 int main()
 {
     TreeNode* T= new TreeNode(3);
     T->left= new TreeNode(9);
     T->right= new TreeNode(20);
     T->right->left= new TreeNode(15);
     T->right->right= new TreeNode(7);
 }
