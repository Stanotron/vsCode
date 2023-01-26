#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    int count = 0;
    void sol(vector<vector<int>> & grid, queue<pair<int,int>> &q){
        if(q.empty()) return; 

        bool flag = false;
        int  r = grid.size(), c = grid[0].size(), a = q.size();
        cout<<a<<" ";
        for(int i = 0; i<a; i++){
            int x = q.front().first, y = q.front().second;
            if(y+1<c && grid[x][y+1]==1){
                grid[x][y+1]=2;
                q.push({x,y+1});
                flag = true;
            }
            if(y-1>=0 && grid[x][y-1]==1){
                grid[x][y-1]=2;
                q.push({x,y-1});
                flag = true;
            }
            if(x+1<r && grid[x+1][y]==1){
                grid[x+1][y]=2;
                q.push({x+1,y});
                flag = true;
            }
            if(x-1>=0 && grid[x-1][y]==1){
                grid[x-1][y]=2;
                q.push({x-1,y});
                flag = true;
            }
            q.pop();  
        }
        if (flag) count++;
        sol(grid,q);
    }

    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i =0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        sol(grid,q);
        for(int i =0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size();j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return count;
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    vector<vector<char>> v {
      {'1','1','1','1','0'},
      {'1','1','0','1','0'},
      {'1','1','0','0','0'},
      {'0','0','0','0','0'}
    };
    // cin>>t;
    while(t--){
        Solution sol;
    }
    return 0;
}
