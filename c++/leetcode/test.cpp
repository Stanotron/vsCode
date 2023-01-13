#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int out = 1+max(maxDepth(root->left),maxDepth(root->right));
        return out;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        if(right>left+1 || left>right+1) return false;
        return (isBalanced(root->left) && isBalanced(root->right));
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