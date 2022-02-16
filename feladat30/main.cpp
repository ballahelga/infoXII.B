#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,y,t;
    ofstream out("bac.out") ;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    out<<y<<" "<<x;
    while(x>1)
{
    t=x;
    x=x-(y-x-2);
        out<<x<<" ";
        y=t;
    }

         return 0;
}
