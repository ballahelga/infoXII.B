#include <iostream>

using namespace std;

int main()
{

    int n,i,j,m;
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    int v[20][20];
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {

                v[i][j]=(i*j)%10;


        }

    }

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
