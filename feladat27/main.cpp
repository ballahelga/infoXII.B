#include <iostream>
#include <fstream>

using namespace std;

int main()

{    int v[100],a=0,i=1;
    ifstream in("bac.txt");
     while(in>0){
        in>>v[i];
        i++;
        if(v[i]<v[1]){a++;}

     }
    cout << a+1 << endl;
    return 0;
}
