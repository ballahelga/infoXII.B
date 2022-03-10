#include <iostream>
#include <fstream>
using namespace std;

int main()
{   int a,szamlalo=1,prev=0;
    ifstream in("bac.txt");
    in>>a;
    while(in>>prev){

       if(a==prev){
        szamlalo++;
       } else{
       if(szamlalo==2){
        cout<<a<<" ";
       }
       szamlalo=1;
       }
     a=prev;
    }
    if(szamlalo==2){
        cout<<a;
    }


    return 0;
}
