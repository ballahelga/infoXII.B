#include <iostream>

using namespace std;

int main()
{     int v[100][100];
       int n,k;
       cout<<"n="  ;
       cin>>n;
       cout<<"k=" ;
       cin>>k;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<"["<< i<<"]["<<j<<"]=";
           cin>>v[i][j];
        }
       }
       for( int i=0;i<n;i++){


           if(i+k+1<n){
            cout<<v[k][i]<<" ";
           }

       }

    return 0;
}
