#include <iostream>

using namespace std;

int main()
{     int v[100][100];
       int n,m,i,j,p=0;
       cout<<"m="  ;
       cin>>m;
       cout<<"n=" ;
       cin>>n;
       for( i=1;i<=m;i++){
        for( j=1;j<=n;j++){
           cout<<"["<< i<<"]["<<j<<"]=";
           cin>>v[i][j];
        }
       }

      for( i=2;i<=m;i++){
        for( j=1;j<=n-1;j++){

                if(v[i][n]==v[1][j]){
                    cout<<v[i][n]<<" ";
                    p++;
                }

        }
       }

if(p==0){
    cout<<"nu exista";
}


    return 0;
}
