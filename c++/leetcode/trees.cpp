#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

//same tree

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
    bool find(TreeNode *root, int val){
        if(root==NULL) return false;
        if(root != NULL && root->val==val){
            return true;
        }
        return ( find(root->left,val)||find(root->right,val) );
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p && find(root,q->val)) return p;
        if(root==q && find(root,p->val)) return q;

        if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right,p,q);
        else if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left,p,q);
        else return root;
    }
};



int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
    
    }
    return 0;
}