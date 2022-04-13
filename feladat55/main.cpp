#include <iostream>

using namespace std;

int main()
{
    int v[100];
    int i,x,kiir=0;
    ifstream in("tablou.txt");
    while(in>>x){
        v[i]=x;
        i++;
    }
    for(int j=0; j<i-1; j++)
    {
        if(v[i-1]==v[j]){
          cout<< "DA";
          kiir=1;
        }

    }
    if(kiir==0){
        cout<<"NU";
    }
    in>>x;
    cout << "Hello world!" << endl;
    return 0;
}
