#include <iostream>
#include <fstream>
using namespace std;

int main()
{    int a,b,c,d,max=-INT_MAX;
     ifstream in("numere.in");
     while(in>>a){
        b=a;
        d=0;
        while(b>0){
            c=b%10;
            b=b/10;
            d=d*10+c;
        }
        if(d==a && a>max){
        max=a;
     }
     }

    cout << max << endl;
    return 0;
}
