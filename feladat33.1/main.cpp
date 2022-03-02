#include <iostream>

using namespace std;

int main()
{
    string a[100];
    int n,k,u,c=0;
    string v="aeiou";
    string b[100];
    cout << "k=";
    cin >>k;
    cout << "n=";
    cin >>n;
    for(int i=0;i<n;i++){
        cout<<"a["<< i<<"]=";
        cin>>a[i];
    }
    for(int  i=0;i<n;i++){
        for(int j=0;j<v.size();j++){
                u=a[i].size();
           if (a[i][u-1]==v[j]){
            b[c]=a[i];
            c++;
           }
        }
        cout<<endl;
        if(c>=k){
            for(int i=0;i<k;i++){
                cout<<b[i]<<" ";
            }
        }
        else{
            cout<<"nu exista";
        }
    }

    return 0;
}
