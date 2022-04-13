#include <iostream>
#include <fstream>
using namespace std;

int main()
{    ifstream in("numere.in");
int n,m,c,d=0,maxim=0;
while(in>>n){
    m=n;
    c=0;
    d=0;
    while(n>0){
        c=n%10;
        n=n/10;
        d=d*10+c;
    }
    if(d==m){
        if(d>maxim){
            maxim=d;
        }
    }
    p=d;
}
    cout << maxim << endl;
    return 0;
}
