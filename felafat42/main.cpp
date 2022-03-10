#include <iostream>

using namespace std;
int generatoare(int n){
int a,b;
for(a=2;a<=n;a++){
    for(b=2;b<=n;n++){
            if(a%2==0 && a!=b && a*b+a/b==n){
                cout<<a<<"-"<<b<<" ";
            }

    }
}

}
int main()
{
    generatoare(2020);
    return 0;
}
