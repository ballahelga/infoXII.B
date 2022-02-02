#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int x, posmin=0,posmax=0,nr=0;
    while(in>>x){
            nr++;
        if(x>0 && posmin==0){
            posmin=nr;
            posmax=nr;
        }else if(x>0){
        posmax=nr;
        }
    }
    if(nr-(posmin-1)>posmax){
        cout << nr-(posmin-1)<< endl;
    }else{
    cout << posmax<< endl;
    }


    return 0;
}
