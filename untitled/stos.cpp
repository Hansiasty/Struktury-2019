//
// Created by Bartłomiej Jóźwiak on 2019-03-04.
//
#include "stos.h"
#include <iostream>
#include <stdlib.h>
#include <stdexcept>
using namespace std;
Stos::Stos(int mrs){
    if(mrs<=0) throw invalid_argument("niedodatni rozmiar stosu");
    max_rozm_stosu=mrs;
    ileJest=0;
    dane=new int [mrs];

}
Stos::~Stos() {
    delete [] dane;
    cout<<"usunalem stos"<<endl;
}

void Stos::wstaw(int a) {

    if(ileJest==max_rozm_stosu)
        throw runtime_error("stos pelny");
    else
    {
        dane[ileJest]=a;
        ileJest++;
    }
}

void Stos::wyczysc() {}

void Stos::wypisz() {
    int i;
for(i=ileJest-1;i>=0;i--)
{cout<<dane[i]<<endl;
}
}

int Stos::zdejmij() {

    if(ileJest==0)
        throw runtime_error("stos pusty");
    else{
        int war=dane[ileJest-1];
        ileJest--;
        return war;
    }
}
