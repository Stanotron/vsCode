#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

// Question 1 : Linear Search and Binary Search

// Linear Search

int linearSearch(int *a,int n,int val){
  int i;
  for ( i = 0; i < n; i++)
  {
    if(a[i]==val)
    return i;
  }
  return -1;
  
}

// Binary Search

int binarySearch(int *a,int n,int val){
  int low=0,mid,high=n-1;
  bool value = false;
  while(low<=high && value!=true){
  mid = (low+high)/2;
    if(a[mid]==val) value = true;
    else if(a[mid]>val){
      high = mid-1;
    }
    else low = mid+1;
  }
  if(value==true)
  return mid;
  else return -1;
}

// Question 2 : Mergesort

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

// Question 3 : Quicksort

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

//Question 4 : Moves

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
    cout <<"Moves : " <<ans;
}


int main()
{
    fast_io;
    ll t;
    t = 1;
    while(t--){
        solve();

        int i, n, d, f;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++){
            cin >> d;
            a[i] = d;
        }
        //mergesort
        mergesort(a, n);
        cout<<endl<<"Array after Mergesort : ";
        for (i = 0; i < n; i++){
            cout<< a[i] << ",";
        }
        //quicksort
        quicksort(a, 0,n-1);
        cout<<endl<<"Array after Quicksort : ";
        for (i = 0; i < n; i++){
            cout<< a[i] << ",";
        }

        cin>>f;
        //linear search
        cout<<endl<<"Index of "<<f<<" by linear search : "<<linearSearch(a,n,f);
        //binary search
        cout<<endl<<"Index of "<<f<<" by binary search : "<<binarySearch(a,n,f);
    }
    return 0;
}