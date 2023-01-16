#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vvi;
        if(nums.size()==0) return {{}};
        if(nums.size()==1){
            return {nums};
        }
        for(int i = 0; i<nums.size(); i++){
            int x = nums[0];
            nums.erase(nums.begin());
            vector<vector<int>> v = permute(nums);
            for(auto y : v){
                y.push_back(x);
                vvi.push_back(y);
            }
            nums.push_back(x);
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
        cout<<'a';
    }
    return 0;
}