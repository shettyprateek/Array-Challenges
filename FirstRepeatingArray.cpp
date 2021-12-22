#include <iostream>
#include <climits>
using namespace std;
// Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
// Output: 5 [5 is the first element that repeats]

// Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
// Output: 6 [6 is the first element that repeats]
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int N=100000;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]]==-1)
        {
            idx[a[i]]=i;
        }
        else
        {
            minidx=min(minidx,idx[a[i]]);
        }
    }
    if(minidx==INT_MAX)
        cout<<"-1"<<endl;
    else    
        cout<<minidx+1<<endl;
    return 0;
}
