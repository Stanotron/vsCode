#include<bits/stdc++.h>
using namespace std;

int tempjump(vector<int> A, int i, int j,int k){
    long long t2jump = 1;
    for(j;j<A.size();j++){
        if(A[j]-A[i]>=k){
            i=j;
            ++t2jump;
        } 
    }
    return t2jump;
}

int kjump (vector<int> A, int K) {
   long long i=0, jump=1, size = A.size();
    long long tjump;
    while(i<size){
        for(long long j = i+1; j<size; j++){
            long long t2jump = tempjump(A,i,j,K);
            if(t2jump>tjump) tjump=t2jump;
        }
        if(tjump>jump) jump=tjump;
        i++;
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