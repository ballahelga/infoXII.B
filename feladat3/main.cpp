#include <iostream>

using namespace std;

void prim(int n,int &x,int &y)
{
    x=0;
    y=0;
    for(int i=n; i>1; i--)
    {
        bool prim=true;
        for(int o=0; o<i/2+1; o++)
        {
            if(i%o==0)
            {
                prim=false;
                break;
            }
        }
        if (prim)
        {
            if(i==0)
            {
                y=i;
            }
            else if(x==0)
            {
                x=i;
            }
            else
            {
                break;
            }
        }
    }
}



int main()
{
    int x,y;
    prim(49,x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}
