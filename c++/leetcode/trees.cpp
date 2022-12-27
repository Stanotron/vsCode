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
    vector<int> vi{};

    void solve(TreeNode *root){
        if (root == NULL) return ;
        solve(root->left);
        vi.push_back(root->val);
        solve(root->right);
    }

    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        solve(root);
        for(int i = 1; i<vi.size(); i++)
            {
                if(vi[i-1] >= vi[i]) return false;
                else continue;
            }
        return true;
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