#include <iostream>
#include <fstream>

using namespace std;

int main()
{  ifstream in("bac.txt");
    int pos1=0,pos2=0,pos3=0,szam,hossz=0;
    while(in>>szam){
        hossz++;
        if(szam<0){
            if(pos3==0 && pos2!=0 && pos1!=0){
                pos3=hossz;
            }
            if(pos2==0 && pos1!=0){
                pos2=hossz;
            }
            if(pos1==0){
                pos1=hossz;
            }
        }
    }
    int hossz1=pos2-1,hossz2=pos3-pos2-1,hossz3=hossz-pos2;
    int max_hossz=-1;
    max_hossz=max(max_hossz,hossz1);
    max_hossz=max(max_hossz,hossz2);
    max_hossz=max(max_hossz,hossz3);
    cout << max_hossz;


}
