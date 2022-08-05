#include <bits/stdc++.h>
using namespace std;
long long even(long long n){
    return n/2;
}
long long odd(long long n){
    return (n*3)+1;
}
int main()
{
    long long n;
    long long out;
    cin>>n;
    out = n;
    cout<<out<<" ";
    while(out!=1){
        if(out%2==0){
            out = even(out);
        }
        else{
            out = odd(out);
        }
        cout<<out<<" ";
    }
    return 0;
}