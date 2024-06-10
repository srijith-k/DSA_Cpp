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

void inordertraversal(TreeNode* head)
{
    if(head==NULL)
        return;

    inordertraversal(head->left);
    cout<<head->val<<" ";
    inordertraversal(head->right);
}

int main()
 {
     TreeNode* root = new TreeNode(4);
     root->left = new TreeNode(2);
     root->right = new TreeNode(7);
     root->left->left = new TreeNode(1);
     root->left->right = new TreeNode(3);
     root->right->left = new TreeNode(6);
     root->right->right = new TreeNode(10);
     inordertraversal(root);

 }
