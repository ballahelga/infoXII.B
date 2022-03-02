#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100];
     int x,y,n,i;
    cout <<"n=";
    cin>>n;
    v[0]=1;
    v[1]=1;
    for( i=2;i<n;i++){
        v[i]=3*v[i-1]-v[i-2];
    }

    cout << v[i-1] << endl;
    return 0;
}
