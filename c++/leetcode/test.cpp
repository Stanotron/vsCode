#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    set<vector<int>> vvi;
    
    void sol(vector<int>& nums,int i, vector<int>& res){
        if(res.size()<=nums.size()){
            vvi.insert(res);
        }
        if(i>=nums.size()) return;

        res.push_back(nums[i]);
        sol(nums,i+1,res);
        res.pop_back();
        sol(nums,i+1,res);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        if(nums.size()==0) return {{}};
        vector<int> res;
        sort(nums.begin(),nums.end());
        sol(nums,0,res);
        vector<vector<int>> v;
        for(auto x : vvi){
            v.push_back(x);
        }
        return v;
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