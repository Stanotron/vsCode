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

    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> vvi {{root->val}};
        vector<int> vi;
        queue<TreeNode *> qt1;
        if(root) qt1.push(root);
        while(!qt1.empty()){
            int size = qt1.size();
            for(int i = 0; i < size; i++){
                if(qt1.front()->left){
                    qt1.push(qt1.front()->left);
                    vi.push_back(qt1.front()->left->val);
                } 
                if(qt1.front()->right){
                    qt1.push(qt1.front()->right);
                    vi.push_back(qt1.front()->right->val);
                } 
                qt1.pop();
            }
            if(vi.size()>0){
                vvi.push_back(vi);
            }
            vi.clear();
        }
        return vvi;
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