//
// Created by Bartłomiej Jóźwiak on 2019-04-08.
//
#include"spis_towarow.h"
#include <iostream>
using namespace std;

Spis_towarow::Spis_towarow() {
    pocz=nullptr;
}

Spis_towarow::~Spis_towarow() {
    while(pocz!=nullptr){
        Box*killer=pocz;
        pocz=pocz->nast;
        delete killer;
    }
}

void Spis_towarow::wstaw(Towar t) {
    Box*nowy=new Box(t,nullptr);
    if(pocz== nullptr){
        pocz->dane.setIlosc(t.getIlosc());
        pocz->dane.setKod(t.getKod());
    }
    else{
        Box*walker=pocz;
        while(walker->dane.getKod()<walker->nast->dane.getKod()){
            walker=walker->nast;
        }
        walker->nast=nowy;
    }
    ileJest++;
}

void Spis_towarow::wypisz() {
    Box*biegacz;
    biegacz=pocz;
    while(biegacz!=nullptr){
        cout<<(*biegacz).dane.getIlosc()<<endl;
        cout<<(*biegacz).dane.getKod()<<endl;
        biegacz=(*biegacz).nast ;
    }

}