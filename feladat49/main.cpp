#include <iostream>

using namespace std;

   int putere(int n,int p){
    int szamlalo=0,hatvany=0;
   for(int o=2;o<n/2+1;o++){
    if(n%o==0){
        szamlalo++;
    }
   }
   if(szamlalo!=0){
    return-1;
   }else{
       while(n%p==0){
        hatvany++;
        n=n/p;
       }
   }
   return hatvany;
   }

int main()
{
    cout << putere(80,2) << endl;
    return 0;
}
