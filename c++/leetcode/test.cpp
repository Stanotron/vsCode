#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    int diam = 1;
    int dfs(TreeNode* root){
        if(!root) return -1;
        int left = -1, right= -1;
        if(root->left) left = dfs(root->left);
        if(root->right) right = dfs(root->right);
        diam = max(diam,2+left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        dfs(root);
        return diam;
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        cout<<'a';
    }
    return 0;
}