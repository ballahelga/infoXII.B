#include <iostream>

using namespace std;

int main()
{

    int n,i,j,k,x,szamlalo=0,c,a;
    cout<<"x=";
    cin>>x;
    int v[100][100];
    a=x;
    while(x!=0){

       x=x/10;
       szamlalo=szamlalo+1;
    }
    x=a;
      for(i=szamlalo; i>=1; i--)
    {
        x=a;
        for(j=szamlalo; j>=1; j--)
        {
        v[i][j]=x%10;
        x=x/10;

        }

    }

    for(i=1; i<=szamlalo; i++)
    {
        for(j=1; j<=szamlalo; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}
