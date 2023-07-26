#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

int dp[100][100];

int solve(vector<int> vi, int i, int j){
    if(i>=j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    else{
        int ans = INT16_MAX;
        for(int k = i; k<j; k++){
            int tempans = solve(vi,i,k) + solve(vi,k+1,j) + vi[i-1]*vi[k]*vi[j];
            if(tempans<ans) ans = tempans;
        }
        return dp[i][j] = ans;
    }
}

int main()
{
    fast_io;
    ll t;
    t = 1\2;
    // cin>>t;
    while(t--){
        vector<int> vi {40,20,30,10,30};
        memset(dp,-1,sizeof(dp));
        cout<<solve(vi,1,vi.size()-1);
    }
    return 0;
}



class Solution {
public:
    int dp[301][301]; int size;
    int solve(vector<int> &nums, int i, int j){
        if(i>j) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        for(int k = i; k<=j; k++){
            int temp = nums[i-1]*nums[k]*nums[j+1];
            temp += solve(nums,i,k-1) + solve(nums,k+1,j);
            ans = max(temp,ans);
        }
        return dp[i][j] = ans;
    }
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        size = nums.size();
        if(size == 3) return nums[1];
        memset(dp,-1,sizeof(dp));
        return solve(nums,1,size-2);       
    }
};