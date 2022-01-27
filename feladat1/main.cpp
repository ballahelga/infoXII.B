#include <iostream>

using namespace std;

int main()
{   string v[1000];
    string e[1000];
     int n,k,s;
     cout<<"n=";
     cin>>n;
     cout<<"k=";
     cin>>k;
     for(int i=0;i<=n;i++){
        cin>>v[i];
        if(k>0){
            int hossz=v[i].size()-1;
            if(v[i][hossz]=='a'|| v[i][hossz]=='e'|| v[i][hossz]=='i'|| v[i][hossz]=='o'|| v[i][hossz]=='u'){

                e[s]=v[i];
                k--;
                s++;
            }
        }
     }
        if (k>0){
            cout<<"nu exista";
        }else{
        for (int i=0;i<s;i++){
            cout<<e[i] << endl;
        }
     }

    return 0;
}
