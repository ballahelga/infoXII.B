#include <iostream>

using namespace std;
  void fii(int n){
      int a,b,c;

      for(int i=1;i<=n;i++){
        if(n%i==0 && i<n/i){
            a=i;
            b=n/i;
            cout<<"("<< a << " "<< b <<")"<<endl;
        }
      }
  }


int main()
{
    fii(12);
    return 0;
}
