#include <iostream>
#include <fstream>
using namespace std;
ifstream in("bac.txt");
int main()
{
    int v[11]={0},x,s=0;

    while(in>>x){
        v[x]++;
    }
    for(x=1;x<=10;x++){
        if(v[x]!=0){
            s=s+10+v[x]*x*x;
        }
    }


    cout << s;
    return 0;
}
