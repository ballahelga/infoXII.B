#include <iostream>

using namespace std;

int main()
{

    int n,i,j,k;
    cout<<"n=";
    cin>>n;
    int v[20][20];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j==n-1)
            {
                v[i][j]=n;
            }

        }

    }
    for(j=0; j<n; j++)
    {
        for(i=n-2-j; i>=0; i--)
        {
            v[i][j]=v[i+1][j]-1;
        }
        for(i=n-j; i<n; i++)
        {
            v[i][j]=v[i-1][j]-1;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
