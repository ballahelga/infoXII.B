#include <iostream>
#include <string>

using namespace std;

int main()
{    string szoveg;
     string megoldas;
     getline(cin,szoveg);
     bool kiir=true;
     for(int i=0;i<szoveg.lengt;i++){
        if(szoveg[i]=','){
            kiir=false;
        }
        if(szoveg[i]=' '){
            kiir=true;
        }
        if(kiir){
            megoldas=megoldas+szoveg[i];
        }
     }
     szoveg=megoldas;
    cout << szoveg << endl;
    return 0;
}
