// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         vector<int> vi;
//         map<long long, int> si;
//         int s;
//         cin >> s;
//         for (int i = 0; i < s; i++)
//         {
//             int val;
//             cin >> val;
//             vi.push_back(val);
//             si[-val] = si[-val] + 1;
//         }
//         int pos = -1;
//         for (auto x = si.begin(); x != si.end(); ++x)
//         {
//             int y = abs(x->first);
//             replace(vi.begin(), vi.end(), y, pos);
//             pos -= x->second;
//         }
//         for (auto x : vi)
//             cout << abs(x) << " ";
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
     if(n==1) return false;
     for (int i = 2; i <= n/2; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int s;
    cin>>s;
    vector<int> vi;
    multiset<int> p, np;
    for (int i = 0; i < s; i++)
    {
        int c;
        cin>>c;
        vi.push_back(c);
    }
    for(auto x: vi){
       if(isPrime(x)){
        p.insert(x);
       }
       else np.insert(-x);
    }
    for(auto x: p){
        cout<<x<<" ";
    }
        for(auto x: np){
        cout<<abs(x)<<" ";
    }
    return 0;
}