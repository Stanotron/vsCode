#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

// recursion and memoization

int dp[102][1002];
int subset2(int arr[], int sum, int n){
    if(sum==0 || n==0) return 0;

    if(dp[n][sum]!=-1) return dp[n][sum];
    
    if(arr[n-1]<=sum){
        return dp[n][sum] = max(subset2(arr,sum,n-1), arr[n-1] + subset2(arr,sum-arr[n-1],n-1));
    }
    else return dp[n][sum] = subset2(arr,sum,n-1);
}

//number of subsets equal to sum

int subset3(int arr[], int sum, int size){
    int sol[size+1][sum+1];
    fr(k,0,sum+1){
        sol[0][k] = 0;
        if(k<size+1) sol[k][0] = 1;
    }
    fr(i,1,size+1){
        fr(j,1,sum+1){
            if(arr[i-1]<=j) sol[i][j] = sol[i-1][j] + sol[i-1][j - arr[i-1]];
            else sol[i][j] = sol[i-1][j];
        }
    }
    return sol[size][sum];
}

//iterative approach

bool subset(int arr[], int sum, int size){
    int sol[size+1][sum+1];
    fr(i,0,size+1){
        fr(j,0,sum+1){
            if(i==0) sol[i][j] = false;
            if(j==0) sol[i][j] = true;

            if(arr[i-1]<j){
                sol[i][j] = (sol[i-1][j] || sol[i-1][j - arr[i-1]]);
            }
            else sol[i][j] = sol[i-1][j];
        }
    }
    if(sol[size][sum]) return true;
    else return false;
}

int numofsubsetwithgivendiff(int arr[],int sum, int diff, int size){
    int target = (sum + diff)/2;
    int sol[target+1][size+1];
    fr(i,0,target+1){
        sol[0][i]=0;
        if(i<sum+1) sol[i][0] = 1;
    }
    for(int i = 1; i <size+1; i++){
        for(int j = 1; j<target+1; j++){            
            if(arr[i-1]<=j){
                sol[i][j] = sol[i-1][j] + sol[i-1][j-arr[i-1]];
            }
            else sol[i][j] = sol[i-1][j]; 
        } 
    }
    return sol[size][target];
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        int arr[4] = {2, 6, 11, 9},sum = 28;
        for(int i = 14; i>=0; i--){
            if(subset3(arr,i,5)>0){
                cout<<abs(sum-(2*i));
                break;
            } 
        }
        int arr2[4] = {1,2,1,3}, diff = 1;
        cout<<numofsubsetwithgivendiff(arr2,7,1,4);
    }
    return 0;
}