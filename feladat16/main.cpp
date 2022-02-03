#include <iostream>

using namespace std;
int identice(int n)
{
    int prev1,prev2,visz=1;
    prev1=n%10;
    while(n!=0)
    {
        prev2=prev1;
        prev1=n%10;
        n=n/10;
        if(prev2!=prev1)
        {
            visz=0;
            break;
        }

    }
    return visz;
}
int main()
{
    int n;
    cout << "n="  ;
    cin>> n;
    identice(n);
    cout<<identice(n);
    return 0;
}
