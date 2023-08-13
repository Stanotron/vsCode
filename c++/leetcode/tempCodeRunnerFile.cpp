 if(i%k!=0){
            int sum = 0;
            while (n != 0){
                sum = sum + n % 10;
                n = n / 10;
            }
            if(sum%k==0) res+=1;
        }
    }
    return res;
}

int main()
{
    int t = 1;
    // cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        return solve(500, 21);
    }
    return 0;