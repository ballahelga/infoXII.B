#include <iostream>

using namespace std;
void divizor(int x,int y,int k,int &nr){
    nr=0;
for(int i=x;i<=y;i++){
    if(i%k==0 && i%10==k){
        nr++;
    }
}


}
int main()
{   int nr;
divizor(3,50,4,nr);
     cout << nr;
    return 0;
}
