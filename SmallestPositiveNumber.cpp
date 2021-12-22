#include<iostream>
#include<climits>
using namespace std;
// You are given an unsorted array with both positive and negative elements.
// You have to find the smallest positive number missing from the array in O(n)
// Input:  {0,-9,1,3-4,5}
//  Output: 2

// Input:  { 2, 3, -7, 6, 8, 1, -10, 15 }
//  Output: 4

// Input: {1, 1, 0, -1, -2}
//  Output: 2
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int S=100;
    int check[S];
    for(int i=0;i<S;i++)
    {
        check[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<n;i++)
    {
        if(check[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}