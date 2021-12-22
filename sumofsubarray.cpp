#include <iostream>
using namespace std;
// Input   : arr[] = {1, 2, 3}
// Output  : 20
// Explanation : {1} + {2} + {3} + {2 + 3} + 
//               {1 + 2} + {1 + 2 + 3} = 20

// Input  : arr[] = {1, 2, 3, 4}
// Output : 50
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
    int cursum=0;
    for(i=0;i<n;i++)
    {
        int temp = 0;
        for(j=i;j<n;j++)
        {
            temp+=arr[j];
            cursum+=temp;
        }
    }
    cout<<cursum;
}