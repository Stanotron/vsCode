#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
        cin>>n>>a>>b;
        int c=1,x = 0;
        if(a<n && a<b){
            c = 0;
            x = x+n;
        }
        while(x<n){
            if(c%2==1){
                x = x+a;
                c +=1;
            }
            else if(c%2==0){
                x = x-b;
                c +=1;
            }
        }
        cout<<c-1<<endl;
	}
    return 0;
}