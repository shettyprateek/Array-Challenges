#include <iostream>
#include <climits>
using namespace std;

// Input:  {0,-9,1,3-4,5}
//  Output: 0 0 1 3 3 5
int main()
{
    int i,j;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    
}