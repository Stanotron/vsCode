#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    int dfs(TreeNode* root,int max){
        if(!root) return 0;
        int res = 0;
        if(root->val >= max){
            res += 1;
            max = root->val; 
        } 
        res += dfs(root->left,max);
        res += dfs(root->right,max);
        return res;
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int res = dfs(root,root->val);
        return res;   
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