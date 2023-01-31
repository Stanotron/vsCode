#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vi(numCourses),sol; int n = numCourses;
        // if(prerequisites.size() == 0){
        //     for(int i = numCourses; i>=0; i--) cout<<i<<" ";
        // }
        queue<int> q;
        vector<vector<int>> graph(numCourses,vector<int>(numCourses, 0)); 
        for(auto x : prerequisites){
            vi[x[0]]+=1;
            graph[x[1]][x[0]] = 1;
        }
        for(int i = 0; i<numCourses; i++){
            if(vi[i]==0) q.push(i);
        }
        if(q.empty()) return {};
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            sol.push_back(curr);
            numCourses--;
            for(int x = 0; x<n; x++){
                if(graph[curr][x]==1){
                    vi[x]-=1;
                    if(vi[x]==0) q.push(x);
                } 
            }
        }
        if(numCourses!=0) return {};
        else return sol;
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
