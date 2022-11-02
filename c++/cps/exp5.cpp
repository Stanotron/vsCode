#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;



//Question 4

int getSum(string s)
{
    int ans = 0;
    for (auto x : s)
    {
        ans += x - '0';
    }
    return ans;
}
int helper(string a, string b)
{
    int ans = 0;

    int sum_A = getSum(a);
    int sum_B = getSum(b);

    if (sum_A > sum_B)
    {
        swap(a, b);
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            ans++;
        }
    }

    return ans;
}
void solve()
{
    string str;
    cin >> str;
    int n = str.size() / 2;
    string a = str.substr(0, n), b = str.substr(n);
    int ans = helper(a, b);
    cout << ans;
}


int main()
{
    fast_io;
    ll t;
    t = 1;
    while(t--){
        solve();
    }
    return 0;
}