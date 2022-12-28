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

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode * root = new TreeNode();
        if(postorder.empty() || inorder.empty()) return NULL;
        root->val = postorder.back();
        int mid = find(inorder.begin(),inorder.end(), postorder.back()) - inorder.begin();
        vector<int> inleft = slicing(inorder,0,mid-1), postleft= slicing(postorder,0,mid-1);
        vector<int> inright = slicing(inorder,mid+1,inorder.size()-1), postright= slicing(postorder,mid,postorder.size()-2);
        root->left = buildTree(inleft,postleft);
        root->right = buildTree(inright,postright);
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