#include<bits/stdc++.h>
using namespace std;

int kjump (vector<int> A, int K) {
    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    int out_;
    out_ = kjump(A, K);
    cout << out_;
}