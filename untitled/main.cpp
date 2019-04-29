#include <iostream>
#include "stos.h"
using namespace std;
int main() {
    Stos st(5);
    int x;
    while(true)
    {
        cout<<"podaje liczby, -999 konczy wpisywanie"<<endl;
        cin>>x;
        if(x<=-999) break;
        try{
            st.wstaw(x);
        }
        catch(exception &e){
        cout<<e.what();
        cout<<"nie wlozylem ostatniej liczby<<endl";
        break;
        }
        cout<<"stos"<<endl;
        st.wypisz();
        while(true){
        try{
            {
                cout<<"zdejmuje ze stosu"<<endl;
                st.zdejmij();
            }
        }
        catch(exception &e)
        {
            cout<<e.what();
            cout<<"nie ma juz elementow do zdjecia"<<endl;
            break;
        }

    }}

    return 0;
}