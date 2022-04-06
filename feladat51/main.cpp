#include <iostream>

using namespace std;

int main()
{   int n,k,a,b,darab=0;
    cout<<"n=";
    cin>>n;
     cout<<"k=";
    cin>>k;
    for(int i=0;i<n;i++){
        cout<<"a=";
        cin>>a;
        int szamlalo=0;
        while(a>0){
            b=a%10;
            a=a/10;
            szamlalo++;
        }
        if(szamlalo>k){
         darab++;
        }
    }
     cout<< darab <<endl;
    return 0;
}
