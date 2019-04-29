//
// Created by Bartłomiej Jóźwiak on 2019-04-01.
//
#include <iostream>
#include "Lista.h"
using namespace std;
Lista::Lista() {
    pocz=nullptr;
    ilejest=0;
}

Lista::~Lista() {
    Box* usuwacz;
    while (pocz != NULL) {
        usuwacz = pocz;
        pocz = (*pocz).nast;
        delete usuwacz;
    }
}


void Lista::wypisz() {
    Box*biegacz;
    biegacz=pocz;
    while(biegacz!=NULL){
        cout<<(*biegacz).dane<<endl;
        biegacz=(*biegacz).nast ;
    }}


    void Lista::wstaw(int a) {
    Box* nowy;
    try {
        nowy = new Box(a);
    }
    catch(exception &e){throw runtime_error("brak pamieci");}
    if(pocz==nullptr)
    {
        pocz=nowy;
    }
    else if((*pocz).dane>=a)
    {
        (*nowy).nast=pocz;
        pocz=nowy;
    } else{
        Box* zaszuk;
        Box* szuk;
        zaszuk=nullptr;
        szuk=pocz;
        while(szuk!=nullptr && a>(*szuk).dane)
        {
            zaszuk=szuk;
            szuk=(*szuk).nast;
        }
        (*zaszuk).nast=nowy;
        (*nowy).nast=szuk;

    }
    ilejest++;
}

    void Lista::usunJeden(int a) {
        Box*szukacz=pocz;
        Box*zaszukacz=nullptr;
        while(szukacz!=nullptr && (*szukacz).dane<a){
            zaszukacz=szukacz;
            szukacz=(*szukacz).nast;
        }
        if(szukacz!=nullptr && (*szukacz).dane==a)
        {
            if(szukacz==pocz)
            {
                pocz=(*szukacz).nast;

            }
            else
                (*zaszukacz).nast=(*szukacz).nast;
            delete szukacz;
            ilejest--;
        }
        else
            throw runtime_error("liczba nie wystepuje w liscie");
    }
