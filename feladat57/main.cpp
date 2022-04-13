#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo;
    cin>>szo;
    for(int i=0; i<szo.size(); i++)
    {
        for(int j=0; j<szo.size(); j++)
        {
            if(i!=j)
            {
                cout << szo[j] ;
            }
        }
        cout<< endl;
    }

    return 0;
}
