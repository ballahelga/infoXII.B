#include <iostream>

using namespace std;
void afisare(int x,int y,int k){
    int i=0;
    for(int j=x;j<=y;j++){
     cout << j << " ";
     i++;
     if(i%k==0){
        cout << "*" << " ";
     }
     if(j==y){
        cout << "*" << " ";
     }
    }
}


int main()
{    int x,y,k;
    cout<<"x=";
    cin>> x;
    cout<<"y=";
    cin>> y;
    cout<<"k=";
    cin>> k;
    afisare(x,y,k);

    return 0;
}
