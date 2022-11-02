#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

//Quicksort

int partition(int *arr, int start, int end)
{
  int temp, k = start, pivot = arr[end];
  for (int i = start; i < end; i++)
  {
    if (arr[i] <= pivot)
    {
      temp = arr[k];
      arr[k] = arr[i];
      arr[i] = temp;
      k++;
    }
  }
  temp = arr[k];
  arr[k] = arr[end];
  arr[end] = temp;
  return k;
}
void quicksort(int *arr, int start, int end)
{
  if (start < end)
  {
    int pi = partition(arr, start, end);
    quicksort(arr, start, pi - 1);
    quicksort(arr, pi + 1, end);
  }
}

//Mergesort

void merge(int left[], int right[], int a[], int nl, int nr)
{
  int i = 0, k = 0, l = 0;
  while (i < nl && k < nr)
  {
    if (left[i] <= right[k])
    {
      a[l] = left[i];
      i++;
    }
    else
    {
      a[l] = right[k];
      k++;
    }
    l++;
  }
  while (i < nl)
    a[l++] = left[i++];
  while (k < nr)
    a[l++] = right[k++];
}
void mergesort(int a[], int n)
{
  int i;
  if (n < 2)
    return;
  int mid = n / 2;
  int left[mid], right[n - mid];
  for (i = 0; i < mid; i++)
  {
    left[i] = a[i];
  }
  for (i = 0; i < n - mid; i++)
  {
    right[i] = a[i + mid];
  }
  mergesort(left, mid);
  mergesort(right, n - mid);
  merge(left, right, a, mid, n - mid);
}

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

        int i, n, d;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++){
            cin >> d;
            a[i] = d;
        }
        mergesort(a, n);
        for (i = 0; i < n; i++){
            cout << a[i] << ",";
        }
        quicksort(a, 0,n-1);
        for (i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}