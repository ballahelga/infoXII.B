#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo;
    int i;
    getline(cin,szo);
    int pos='a';
    for(int i=0; i<szo.size(); i++)
    {
       if(szo[i]=='a' || szo[i]=='e' || szo[i]=='i' || szo[i]=='o' || szo[i]=='u' )
            {
                 szo[i]=szo[i]+1;
            }
    }
        cout<< szo;


    return 0;
}
