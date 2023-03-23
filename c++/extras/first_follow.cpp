#include <bits/stdc++.h>
#include<list>

#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

list<int>::iterator partition(list<int> a, list<int>::iterator start, list<int>::iterator end)
{
  int temp, pivot = *end;
  list<int>::iterator it,k = start;
  for (it = start; it != end; ++it){
    if(*it<=pivot){
        temp = *k;
        *k = *it;
        *it = temp;
        k++;
    }
  }
  temp = *k;
  *k = *end;
  *end = temp;
  return k;
}

void quicksort(list<int> a, list<int>::iterator start, list<int>::iterator end)
{
  if (start - a.begin() < end - a.begin())
  { 
    auto pi = partition(a, start, end);
    quicksort(a, start, pi--);
    quicksort(a, pi++, end);
  }
}



int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
       list<int> sol{4,85,2,8}; 
       list<int>::iterator it;
       for(it = sol.begin(); it!=sol.end(); ++it){
            cout<<*it<<" ";
       }
    }
    return 0;
}