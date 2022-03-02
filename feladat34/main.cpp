#include <iostream>

using namespace std;
void putere(int n,int &d,int &p){
int pmax=0;
int dmax=0;
d=2;
while(n>1){
    p=0;
    while(n%d==0){
        p++;
        n=n/d;
    }
    if(p>=pmax){
        pmax=p;
        dmax=d;
    }
    d++;

}
    d=dmax;
    p=pmax;
}

int main()
{
    int p,d;
    putere(10780,p,d);
    cout << p << endl;
    cout << d << endl;
    return 0;
}
