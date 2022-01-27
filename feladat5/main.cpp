#include <iostream>

using namespace std;

int main()
{  int v[2][100];
    int n,i,j,k;
    cout<<"k=";
    cin>>k;
    cout<<"n=";
    cin>>n;
    for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){

        cout << "v[" << i << "][" << j << "]= ";
        cin >> v[i][j];

    }

    }
    int a=v[k][k-1];
    for(j=k-1;j>=2;j--){
        a[k][j]=v[k][j-1];
    }
    v[k][1]=a;
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>j){

            cout<<v[i][j]<<" ";
        }
        }
        cout<< endl;
    }


    return 0;
}
