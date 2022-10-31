#include<bits/stdc++.h>
using namespace std;

int kjump (vector<int> A, int K) {
   long long i=0, jump=1, size = A.size();
   while(i<A.size()){
    long long temp = 1, j;
    for(j = 1; j<size; j++){
        if(A[j]-A[i]>=K){
            i = j;
            ++temp;
        }
        if(jump<temp) jump = temp;
    }
   }
   return jump;
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