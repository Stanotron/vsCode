#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

//Question 1

void palindrome(int n ){
    int sum = 0, temp = n;
    while (n > 0){
        int r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum) cout <<n<< " is Palindrome";    
    else cout <<n<< " is not Palindrome";
}

//Question 2

void triangle(int n){
    int i,j,k,l;  
    for(i=1;i<=n;i++){ 
        for(j=1;j<=n-i;j++){ 
            cout<<" "; 
        } 
        for(k=1;k<=i;k++){ 
            cout<<k; 
        } 
        for(l=i-1;l>=1;l--){ 
            cout<<l; 
        } 
        cout<<"\n"; 
    }
}

// Question 3

void decToBinary(int n){
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
	 	binaryNum[i] = n % 2;
	 	n = n / 2;
	 	i++;
    }
    cout<<"Binary of " << n << " is "; 
    for (int j = i - 1; j >= 0; j--) cout<< binaryNum[j];
}

//Question 4

void fibonacci(int n){
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Fibonacci Series of "<<n<<" : ";
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        int intpal,inttri,decbin,fibo;
        cin >> intpal;
        palindrome(intpal);
        cout<<endl<<endl;
        cin >> inttri;
        cout<<"Trinagle of "<<inttri<<":-"<<endl;
        triangle(inttri);
        cout<<endl;
        cin>>decbin;
        decToBinary(decbin);
        cout<<endl<<endl;
        cin>>fibo;
        fibonacci(fibo);
    }
    return 0;
}