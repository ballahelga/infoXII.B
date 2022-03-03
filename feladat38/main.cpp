#include <iostream>
#include <string>

using namespace std;

int main()
{   string szoveg;
    string s1;
    cout<<"a szoveg:";
    getline(cin,szoveg);
    bool jo=true;
    for(int i=0;i<szoveg.size();i++){
        if (szoveg[i]=='-'){
            jo=false;
        }
        if(jo==true){
            s1=s1+szoveg[i];
        }
        if(szoveg[i]==' '){
            jo=true;
        }
    }

    cout << s1 << endl;
    return 0;
}
