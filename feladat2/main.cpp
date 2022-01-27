#include <iostream>
#include <fstream>
using namespace std;

int main()
{ ifstream in("bac.txt");
int x,prev,pos=-1,spos=-1;
int k;
in>>k;
int hatvany=1;
while(k!=(k%hatvany)){
    hatvany *=10;
}
in>>prev;

while(in>>x){
    pos++;
    if(prev%hatvany==k && x%hatvany==k){
        spos=prev;
        pos=x;
    }
    prev=x;
}
    if(pos==-1 ){
        cout<<"nu exista";
    }else{
    cout<< spos <<" "<< pos;}
    return 0;
}
