#include <iostream>
using namespace std;

// Input 8
// 1 2 0 7 2 0 2 0

int main()
{
    int i,j;
    int t;
    cin>>t;
    int c=0;
    int maximum = -1;
    int sol=0;
    while(c!=t)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=-1;
        sol=0;
        maximum = -1;
        for(i=0;i<n;i++)
        {
            if(a[i]>maximum && a[i]>a[i+1])
            {
                sol++;
            }
            maximum=max(maximum,a[i]);
        }
        c++;
        cout<<"Case #"<<c<<": "<<sol<<endl;
    }
}