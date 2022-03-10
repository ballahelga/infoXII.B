#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x1,x2,par1,s,par2,sf;
    ifstream be("bac.txt");
    be>>x2;
    s=s+x2;
    while(be>>x1){
        if(x1%2==0 && x2%2==0){
            s=s+x1;
        }else

    }

    cout << "Hello world!" << endl;
    return 0;
}
