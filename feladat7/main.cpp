#include <iostream>

using namespace std;
 void divx(int n, int x){


    int i;
    for(i=n;i>=1;i--){
         cout << i*x << " " ;
    }
 }
int main()
{
   divx(4,15);

    return 0;
}
