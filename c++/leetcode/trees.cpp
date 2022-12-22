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
    bool check(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL ) return true;
        else if(p!=NULL && q!=NULL && p->val==q->val) return (check(p->left, q->left) && check(p->right, q->right) );
        else return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return !subRoot;
        return (check(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
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