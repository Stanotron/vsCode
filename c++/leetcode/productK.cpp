#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vi;
        int mul = 1;
        auto zero = find(nums.begin(),nums.end(),0);
        if(zero == nums.end()){
            for(auto x : nums){
                mul *=  x;
            }
            for(auto x : nums){
                vi.push_back(mul/x);
            }
        }
        else {
            int index = zero - nums.begin();
            nums.erase(zero);
            for(auto x : nums){
                mul *=  x;
            }
            vi.assign(nums.size()+1, 0);
            vi[index] = mul;
            for(auto x : vi){
                cout<<" "<<x;
            }
        }
        return vi;
    }

int main()
{
    fast_io;
    ll t;
    t = 1;
    vector<int> vi {0,1,2,4,8,5,6,7,9,3,55,88,77,99,999999999},sol;
    while(t--){
        sol = productExceptSelf(vi);
        // for(auto x : sol)
        // {
        //     cout<<x<<" ";
        // }
    }
    return 0;
}