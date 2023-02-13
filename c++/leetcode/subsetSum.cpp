#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

bool subset(int arr[], int sum, int size){
    int sol[size+1][sum+1];
    fr(i,0,size+1){
        fr(j,0,sum+1){
            if(i==0) sol[i][j] = false;
            if(j==0) sol[i][j] = true;

            if(arr[i-1]<j){
                sol[i][j] = (sol[i-1][j] || sol[i][j + arr[i-1]]);
            }
            else sol[i][j] = sol[i-1][j];
        }
    }
    return sol[size][sum];
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        int arr[5] {2,3,7,8,10}, sum = 11;
        cout<<subset(arr,sum,5);
    }
    return 0;
}