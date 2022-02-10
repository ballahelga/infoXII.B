#include <iostream>

using namespace std;
void imog(int x,int y,int &rez){
int c,d=0,a;
a=x;
while(x!=0){
    c=x%10;
    x=x/10;
    d=d*10+c;
}
if(d==y){
    rez=1;
}else{
    rez=0;
    }
}



int main()
{    int rez;
     imog(126,621,rez);
    cout << rez ;
    return 0;
}
