#include <iostream>

using namespace std;

int main()
{

    int n,i,j,k;
    cout<<"n=";
    cin>>n;
    int v[n][n];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

            cout << "v[" << i << "][" << j << "]= ";
            cin >> v[i][j];

        }

    }

    for(i=1; i<=n; i++)
    {
        cout<<v[i][i]<<" ";
    }
    for(j=2; j<=n; j++)
    {

        cout<<v[n][j]<<" ";
    }
    for(i=n-1; i>=1; i--)
    {
        cout<<v[i][n]<<" ";
    }

    for(j=n-1; j>=2; j--)
    {

        cout<<v[1][j]<<" ";
    }










    return 0;
}
