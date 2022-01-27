#include <iostream>

using namespace std;
int factori(int n,int m)
{
    int num=0;
    for(int i=2; i<=n && i<=m; i++)
    {
        int numN=0,numM=0;
        while(n%i==0)
        {
            numN++;
            n/=i;
        }
        while(m%i==0)
        {
            numM++;
            m/=i;
        }
        if(numM==numN && numM!=0)
        {
            num++;
        }
    }
    return num;
}
int main()
{
    cout << factori(16500,10780) << endl;
    return 0;
}
