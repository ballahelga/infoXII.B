#include <iostream>
#include <string>
using namespace std;

int main()
{    string szo;
getline(cin,szo);
int pos='a'-'A';
szo[0]-=pos;
for(int i=1;i<szo.size();i++){
    if(szo[i]==' '){
        szo[i-1]-=pos;
        szo[i+1]-=pos;
    }
}
szo[szo.size()-1]-=pos;
    cout << szo << endl;
    return 0;
}
