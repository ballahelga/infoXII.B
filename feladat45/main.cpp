#include <iostream>

using namespace std;
int baza(int n){
int max=INT_MIN;
while(n!=0){
    if(n%10>max){
        max=n%10;
        }
     n=n/10;
}
return max+1;
}
int main()
{
    cout << baza(50731);
    return 0;
}
