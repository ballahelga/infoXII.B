#include <iostream>

using namespace std;

int main()
{   int n,m,a[100][100];
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][0]==a[j][n-1]){
                cout<<a[i][0];
            }
        }
    }

    return 0;
}
