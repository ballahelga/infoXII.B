#include <iostream>

using namespace std;

int main()
{   int n,k;
    int v[100][100];
    cout<<"n=";
    cin>>n;
    cout<<"k=";
    cin>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*k;j++){
            v[i][j]=i+(j-1)/k;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*k;j++){
            cout<<v[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}
