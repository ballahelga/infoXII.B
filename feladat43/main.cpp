#include <iostream>

using namespace std;

int main()
{    int v[100][100];
     int n,m;
     cout<<"m=";
     cin>>m;
     cout<<"n=";
     cin>>n;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                cin >> v[i][j];
        }
     }
     int szamlalo = 0;
     for(int j=1;j<n;j++){
        bool egyezik = false;
        for(int i=0;i<m;i++){
             if (v[i][0] == v[i][j]) {
                egyezik = true;
             }
        }
        if (!egyezik){
            szamlalo++;
        }
     }

    cout << szamlalo << endl;
    return 0;
}
