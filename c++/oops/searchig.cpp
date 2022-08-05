//LINEAR SEARCH WITH QUICKSORT



#include<iostream>
using namespace std;
int partition(int *arr,int start,int end){
  int temp, k=start, pivot = arr[end];
  for (int i = start; i < end; i++)
  {
    if(arr[i]<=pivot){
       temp  =  arr[k];
       arr[k] = arr[i];
       arr[i] = temp;
       k++;
    }
  }
       temp  =  arr[k];
       arr[k] = arr[end];
       arr[end] = temp;
  return k;
}
void quicksort(int *arr, int start, int end){
if(start<end){
  int pi = partition(arr,start,end);
  quicksort(arr,start,pi-1);
  quicksort(arr,pi+1,end);
}
}
int search(int *a,int n,int val){
  int i;
  for ( i = 0; i < n; i++)
  {
    if(a[i]==val)
    return i;
  }
  return -1;
  
}
int main(){
  int n,d,i;
  cin>>n;
  int arr[n];
  for ( i = 0; i < n; i++)
  {
    cin>>d;
    arr[i]=d;
  }
  quicksort(arr,0,n-1);
  for ( i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int f;
  cin>>f;
  int index = search(arr,n,f);
  cout<<endl<<index;
  return 0;
}




// BINARY SEARCH WITH QUICKSORT



#include<iostream>
using namespace std;
int partition(int *arr,int start,int end){
  int temp, k=start, pivot = arr[end];
  for (int i = start; i < end; i++)
  {
    if(arr[i]<=pivot){
       temp  =  arr[k];
       arr[k] = arr[i];
       arr[i] = temp;
       k++;
    }
  }
       temp  =  arr[k];
       arr[k] = arr[end];
       arr[end] = temp;
  return k;
}
void quicksort(int *arr, int start, int end){
if(start<end){
  int pi = partition(arr,start,end);
  quicksort(arr,start,pi-1);
  quicksort(arr,pi+1,end);
}
}
int search(int *a,int n,int val){
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
int main(){
  int n,d,i;
  cin>>n;
  int arr[n];
  for ( i = 0; i < n; i++)
  {
    cin>>d;
    arr[i]=d;
  }
  quicksort(arr,0,n-1);
  for ( i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int f;
  cin>>f;
  int index = search(arr,n,f);
  cout<<endl<<index;
  return 0;
}