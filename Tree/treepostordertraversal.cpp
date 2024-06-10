

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

void postordertraversal(TreeNode* head)
{
    if(head==NULL)
        return;

    postordertraversal(head->left);
    postordertraversal(head->right);
    cout<<head->val<<" ";
}

int main()
 {
     TreeNode* root = new TreeNode(1);
     root->left = new TreeNode(2);
     root->right = new TreeNode(3);
     root->left->left = new TreeNode(4);
     root->left->right = new TreeNode(5);
     root->right->right = new TreeNode(6);
     postordertraversal(root);

 }
