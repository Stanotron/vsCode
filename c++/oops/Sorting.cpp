// selection sort

#include <iostream>
using namespace std;
int main()
{
  int n, d, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
  {
    cin >> d;
    a[i] = d;
  }
  for (i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[min])
        min = j;
    }
    int temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
  for (i = 0; i < n; i++)
  {
    cout << a[i] << ",";
  }
  return 0;
}

// bubble sort

#include <iostream>
using namespace std;
int main()
{
  int n, d, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
  {
    cin >> d;
    a[i] = d;
  }
  for (i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    cout << a[i] << ",";
  }
  return 0;
}

// insertion sort

#include <iostream>
using namespace std;
int main()
{
  int n, d, i;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
  {
    cin >> d;
    a[i] = d;
  }
  for (i = 1; i < n; i++)
  {
    int val = a[i];
    int j = i - 1;
    while (a[j] > val && j >= 0)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = val;
  }
  for (i = 0; i < n; i++)
  {
    cout << a[i] << ",";
  }
  return 0;
}

// merge sort

#include <iostream>
using namespace std;
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
int main()
{
  int i, n, d;
  cin >> n;
  int a[n];
  for (i = 0; i < n; i++)
  {
    cin >> d;
    a[i] = d;
  }
  mergesort(a, n);
  for (i = 0; i < n; i++)
  {
    cout << a[i] << ",";
  }
  return 0;
}

// QUICK SORT

#include <iostream>
using namespace std;
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
int main()
{
  int n, d, i;
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> d;
    arr[i] = d;
  }
  quicksort(arr, 0, n - 1);
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}