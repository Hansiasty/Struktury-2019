#include <iostream>
#include "Stos.h"
using namespace std;
int main() {
    Stos st;
    int L;
    cout<<"tworzymy stos, 999 konczy wpisywanie"<<endl;
    while(true)
    {
        cin>>L; if(L==999) break;
        st.wstaw(L);
        st.wypisz();
    }
    st.zdejmij();
    st.wypisz();
    return 0;
}