#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x,count=0;
    cin>>n>>x;
    long long p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    sort(p,p+n);
    long long end=n-1,start=0;
    while (start<=end)
    {
        if(p[start]+p[end]<=x){
            count++;
            start++;
            end--;
        }
        else{
            count++;
            end--;
        }
    }
    cout<<count;
    
    return 0;
}