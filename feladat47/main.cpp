#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szoveg;
    getline(cin,szoveg);
    int pos1=-1,pos2=-1,i,mh_szama=0,j;
    for(i=0; i<szoveg.size(); i++)
    {

        if(szoveg[i]==' ')
        {
            pos1=pos2;
            pos2=i;
             mh_szama=0;

        for(j=pos1; j<pos2; j++)
        {

            if(szoveg[j]=='a'|| szoveg[j]=='e'||szoveg[j]=='i'||szoveg[j]=='o'||szoveg[j]=='u')
            {
                mh_szama++;
            }
        }

        if(mh_szama<(pos2-pos1)-mh_szama)
        {   for(int k=pos1;k<pos2;k++){
            cout << szoveg[k] << " ";
        }
         cout<<endl;
        }
    }
    }
    return 0;
}
