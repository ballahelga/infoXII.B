#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("tablou.txt");
    bool kiir=false;
    int v[10];
    int x;
    for(int i=0; i<10; i++)
    {
        in>>v[i];
    }
    in>>x;
     for(int i=0;i<10;i++){
        if(x==v[i]){
            cout<<"DA";
            kiir=true;
        }
     }
     if(!kiir){
        cout<<"NU";
     }

    return 0;
}
