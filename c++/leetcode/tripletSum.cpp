#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vvi;
        sort(nums.begin(),nums.end());
        if(*nums.begin()>=1) return vvi;
        for(int x = 0; x < nums.size(); x++){
            int req = -nums[x];
            int high = nums.size()-1;
            int low = x+1;
            while(low<high){
                int sum = nums[high]+nums[low];
                if(sum>req) --high;
                else if(sum<req) ++low;
                else{
                    vector<int> tri {nums[x],nums[low],nums[high]}; 
                    vvi.push_back(tri);
                    while (low < high && nums[low] == tri[1]) low++;
                    while (low < high && nums[high] == tri[2]) high--;
                }
            }
            while (x + 1 < nums.size() && nums[x + 1] == nums[x]) 
            x++;
        }

        return vvi;                    
    }

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        vector<int> vi {-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0};
        vector<vector<int>> sol;
        sol = threeSum(vi);
        for(auto y : sol){
            for(auto z : y){
                cout<<z<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}