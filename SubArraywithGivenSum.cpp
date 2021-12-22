#include <iostream>
#include <climits>
using namespace std;
// Given an unsorted array of nonnegative integers, find a continuous subarray 
// which adds to a given number.
// Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
// Output: Sum found between indexes 2 and 4
// Sum of elements between indices
// 2 and 4 is 20 + 3 + 10 = 33
int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=a[0],start=0;
    for(int i=1;i<=n;i++)
    {
        while(sum>s&&start<i-1)
        {
            sum=sum-a[start];
            start++;
        }
        if(sum==s)
        {
            cout<<start+1<<" "<<i;
            return 0;
        }
        if(i<n)
        {
            sum=sum+a[i];
        }
    }

    
}