#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo,szo1;
    getline(cin,szo);
    int first=-1,last;
    for(int i=0; i<szo.size(); i++)
    {
    if(szo[i]=='a' || szo[i]=='e' || szo[i]=='i' || szo[i]=='o' || szo[i]=='u' )
            {
                 last=i;
                 if(first==-1){
                    first=i;
                 }
            }
            for(int i=0; i<szo.size(); i++)
    {if( i!=first && i!=last){
        szo1+=szo;
    }
    }
    szo=szo1;
    cout<<szo;
    }

    return 0;
}
