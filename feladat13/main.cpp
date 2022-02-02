#include <iostream>

using namespace std;
int  suma(int n){
    int s=1,c=0;
    for(int i=4;i<=n;i++){
        if(n%i==0){
            c=0;
            for(int o=2;o<i/2+1;o++){
                if(i%o==0){
                    c++;
                }
                }
                if(c>0){
                    s+=i;
                }
            }

    }
    return s;
}
int main()
{
    cout<< suma(12);
    return 0;
}
