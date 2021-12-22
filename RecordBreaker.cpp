#include <iostream>
using namespace std;

// Input 8
// 1 2 0 7 2 0 2 0
//Ouput 2
int main()
{
    int i,j;
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int sol=0;
    int maximum = -1;
    for(i=0;i<n;i++)
    {
        if(a[i]>maximum && a[i]>a[i+1])
        {
            sol++;
        }
        maximum=max(maximum,a[i]);
    }
    cout<<sol;
}