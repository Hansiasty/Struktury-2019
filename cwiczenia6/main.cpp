#include <iostream>
#include "proces.h"
#include "kolejka_procesow.h"
using namespace std;
int main() {
KolejkaProcesow kp;
    cout<<"tworzymy kolejke, 999 konczy wpisywanie"<<endl;
    while(true)
    {int id;
    int lw;
        cout<<"podaj identyfikator procesu";

        cin>>id; if(id==999) break;
        cout<<"podaj liczbe watkow";
        cin>>lw;
        Proces p(id,lw);
        kp.dodaj_do_kolejki(p);
    }
    return 0;
}