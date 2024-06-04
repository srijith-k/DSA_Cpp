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

TreeNode* invertTree(TreeNode* root) {
    if(root==NULL)
        return NULL;
    invertTree(root->left);
    invertTree(root->right);
    TreeNode* temp= root->left;
    root->left= root->right;
    root->right= temp;

    return root;
}

int main()
 {
     TreeNode* T= new TreeNode(1);
     T->left= new TreeNode(2);
     TreeNode* Q= new TreeNode(1);
     Q->right= new TreeNode(2);
     cout<<isSameTree(T,Q);
 }
