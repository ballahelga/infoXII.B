#include <iostream>

using namespace std;

int main()
{
    string a[100];
    int n,k,u;
    string v="aeiou";
    cout << "n=";
    cin >>n;
    cout << "k=";
    cin >>k;
    for(int i=0;i<n;i++){
        cout<<"a["<< i<<"]=";
        cin>>a[i];
    }
    for(int  i=0;i<n;i++){
        for(int j=0;j<v.size();j++){
                u=a[i].size();
           if (a[i][u-1]==v[j]){
            cout<<a[i]<<endl;
           }
        }
    }
    return 0;
}
