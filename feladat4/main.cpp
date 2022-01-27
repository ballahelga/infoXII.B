#include <iostream>

using namespace std;

int main()
{  int a[100][100];
    int m,n,i,j,o;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    o=0;
    for(i=m;i>=1;i--){
            for(j=n;j>=1;j--){

                     a[i][j]=o*o;
                     o=o+2;



            }

    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<< endl;
    }

    return 0;
}
