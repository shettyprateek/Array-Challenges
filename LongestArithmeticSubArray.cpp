#include <iostream>
#include <climits>
using namespace std;
// Given an array arr[] of size, N, the task 
// is to find the length of the longest subarray that forms an Arithmetic Progression.
// Input: arr[] = {3, 4, 5}
// Output: 3
// Explanation:The longest subarray forming an AP is {3, 4, 5} with common difference 1.
// Input: {10, 7, 4, 6, 8, 10, 11}
// Output: 4
// Explanation:The longest possible subarray forming an AP is {4, 6, 8, 10} 
// with common difference(= 2).
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int ans=0;
    int j=2;
    int curr=2;
    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            curr=2;
            pd=arr[j]-arr[j-1];
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
}