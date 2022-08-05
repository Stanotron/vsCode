#include <iostream>
#include <algorithm>
using namespace std;
void Pair(int nums[], int n, int target)
{
    sort(nums, nums + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (nums[low] + nums[high] == target)
        {
            cout << "Pair found (" << low << ", " << high << ")\n";
            return;
        }
        (nums[low] + nums[high] < target)? low++: high--;
    }
    cout << "Pair not found";
}
 
int main()
{ 
    int s,t;
    cin>>s;
    int nums[s];
    for (int i = 0; i < s; i++)
    {
        cin>>nums[i];
    }
    cin>>t;
    int n = sizeof(nums)/sizeof(nums[0]);
    Pair(nums, n, t);
    return 0;
}
