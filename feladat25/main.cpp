#include <iostream>

using namespace std;
int armonie(int x,int y)
{
    int s1=0,s2=0;
    for (int o=1; o<=x; o++)
    {
        if(x%o==0)
        {
            s1+=o;
        }
    }
    for (int o=1; o<=y; o++)
    {
        if(y%o==0)
        {
            s2+=o;
        }
    }
    if(s1>s2 && s1>x+y && s2<x+y)
    {
        return 1;
    }
    else if(s1>s2 && s2>x+y && s1<x+y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << armonie(8,13) << endl;
    return 0;
}
