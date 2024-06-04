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

bool isSameTree(TreeNode* p, TreeNode* q) {

    if((p!=NULL&&q==NULL)||(p==NULL&&q!=NULL))
        return false;
    else if(p==NULL&&q==NULL)
        return true;
    else{
        if(p->val!=q->val)
            return false;
    }
    bool l= isSameTree(p->left, q->left);
    if(l==false)
        return false;
    bool r= isSameTree(p->right, q->right);
    if(r==false)
        return false;
    return true;
}

int main()
 {
     TreeNode* T= new TreeNode(1);
     T->left= new TreeNode(2);
     TreeNode* Q= new TreeNode(1);
     Q->right= new TreeNode(2);
     cout<<isSameTree(T,Q);
 }
