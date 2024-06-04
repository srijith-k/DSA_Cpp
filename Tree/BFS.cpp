#include<iostream>
#include<queue>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

void bfs(TreeNode* root)
{
    queue<TreeNode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        TreeNode* top= Q.front();
        cout<<top->val<<" ";
        if(top->left!=NULL)
            Q.push(top->left);
        if(top->right!=NULL)
            Q.push(top->right);
        Q.pop();
    }
}

 int main()
 {
     TreeNode* T= new TreeNode(1);
     T->left= new TreeNode(2);
     T->right= new TreeNode(3);
     T->left->left= new TreeNode(4);
     T->left->right= new TreeNode(5);
     bfs(T);
 }

