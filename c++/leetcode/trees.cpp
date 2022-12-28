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
    vector<int> slicing(vector<int> arr, int X, int Y){
        auto start = arr.begin() + X;
        auto end = arr.begin() + Y + 1;
        vector<int> result(Y - X + 1);
        copy(start, end, result.begin());
        return result;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode * root = new TreeNode();
        if(preorder.empty() || inorder.empty()) return NULL;
        root->val = preorder[0];
        int mid = find(inorder.begin(),inorder.end(), preorder[0]) -  inorder.begin();
        vector<int> inleft = slicing(inorder,0,mid-1), preleft= slicing(preorder,1,mid);
        vector<int> inright = slicing(inorder,mid+1,inorder.size()-1), preright= slicing(preorder,mid+1,preorder.size()-1);
        root->left = buildTree(preleft,inleft);
        root->right = buildTree(preright,inright);
        return root;
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