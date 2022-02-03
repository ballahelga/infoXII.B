#include <iostream>
#include <fstream>
using namespace std;

int main()
{   ifstream in("bac.txt");
    int n,m,a;
    in>>n;
    m=0;
    for(int i=1;i<=n;i++){
        in>>a;
        if(a>m){
            m=a;
        }
        cout << m << " ";
    }

    return 0;
}
