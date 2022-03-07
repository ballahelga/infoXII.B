#include <iostream>

using namespace std;


   int transformarebaza10(int b,int n ){
   int c=1,k,s=0;
   while(n!=0){
    int a;
    a=n%10;
    n=n/10;
    s=s+a*c;
    c=c*b;
   }
   return s;
   }
int main()
{
     cout<< transformarebaza10(2,10010 )<<endl;
    return 0;
}
