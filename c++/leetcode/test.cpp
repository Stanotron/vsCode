#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    int valid = true;
    vector<pair<int,int>> vii;
    void dfs(int i, int j, vector<vector<char>>& board){
        if(i==board.size()-1 || j==board[0].size()-1 || i==0 || j==0){
            if(board[i][j]=='O'){
                valid = false;
            } 
            return;
        }

        if(board[i][j]=='O'){
            cout<<i<<" "<<j<<endl;
            board[i][j]='X';
            vii.emplace_back(i,j);
            if(valid) dfs(i,j+1,board);
            if(valid) dfs(i,j-1,board);
            if(valid) dfs(i+1,j,board);
            if(valid) dfs(i-1,j,board);
        }
        if(!valid){
            board[i][j] = 'O';
        } 
        return;   
    }

    void solve(vector<vector<char>>& board) {
        if(board.size()==1 && board[0].size()==1) return;

        for(int i = 1; i<board.size()-1; i++){
            for(int j = 1; j<board[0].size()-1; j++){
                if(board[i][j]=='O'){
                    dfs(i,j,board);
                    if(!valid && !vii.empty()){
                        for(auto c : vii){
                            board[c.first][c.second]='O';
                        }
                    }
                    vii.clear();
                    valid = true;
                }  
            }
        }
        return;
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
