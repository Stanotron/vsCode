#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

int maxArea(vector<int>& height) {
        int area = 0, i = 0;
        int end = height.size()-1;
        while(end>i){
            int less = min(height[i],height[end]);
            int tarea = less*(end-i);
            if(area<tarea) area = tarea;
            if(height[i] <= height[end]) i++;
            else end--;
        }
        return area;
}
int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        vector<int> height {1,8,6,2,5,4,8,3,7};
        int max = maxArea(height);
        cout<<max;
    }
    return 0;
}