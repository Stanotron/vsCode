// #include <bits/stdc++.h>
    
// #define fr(i,a,b) for(int i = a; i < b; i++)
// #define pb push_back
// #define ll long long
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
// using namespace std;

// int q1(long s, map<long,long> mii){
//     long temp;
//     if(s%2!=0) temp = (s/2)+1;
//     else temp = s/2; 
//     for(auto &x : mii){
//         if(x.second>=temp){
//             return 1;
//         }
//     }
//     return 0;
// }

// int q2(long s, vector<long> vi){
    
//     return 0;
// }

// int main()
// {
//     fast_io;
//     ll t;
//     t = 2;
//     // cin>>t;
//     while(t--){
//         //Q1
//         long s,temp;
//         map<long,long> mii;
//         vector<long> vi;
//         cin>>s;
//         fr(i,0,s){
//             cin>>temp;
//             // vi.push_back(temp);
//             mii[temp] = mii[temp]+1;
//         }
//         for(auto &x : mii) cout<<x.first<<" "<<x.second<<endl;
//         cout<<q1(s,mii)<<endl;
//         cout<<q2(s,vi);
//     }
//     return 0;
// }

#include <iostream>
#include <map>
 
int main()
{
  // Create a map of strings to integers
  std::map<std::string, int> map;
 
  // Insert some values into the map
  map["three"] = 3;
  map["two"] = 2;
  map["one"] = 1;
 
  // Get an iterator pointing to the first element in the map
  std::map<std::string, int>::iterator it = map.begin();
 
  // Iterate through the map and print the elements
  while (it != map.end())
  {
    std::cout << "Key: " << (it->first)*2 << ", Value: " << it->second << std::endl;
    ++it;
  }
 
  return 0;
}