#include <iostream>

using namespace std;

int main()
{

    int n,i,j,k;
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;
    int v[n][n];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

            cout << "v[" << i << "][" << j << "]= ";
            cin >> v[i][j];

        }

    }

    for(j=1; j<=n; j++)
    {
        if (k>j)
        {
            cout << v[k][j] << " ";

        }
    }
    cout << endl;
    for(i=1; i<=n; i++)
    {
        if(i<k)
        {
            cout<<v[i][k]<<" ";

        }

    }
    return 0;
}
