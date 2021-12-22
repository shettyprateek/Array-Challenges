#include <iostream>
using namespace std;
int main() {
    int a=0,b=0;
    while(a<6)
    {
        b=a;
        while(b>=0)
        {
            cout<<b<<" ";
            b-=1;
        }
        cout<<endl;
        a+=1;
    }

    return 0;
}