//
// Created by Bartłomiej Jóźwiak on 2019-03-25.
//
#include "kolejka_procesow.h"
#include <iostream>
using namespace std;

KolejkaProcesow::KolejkaProcesow() {
ileJest=0;
poczatek=nullptr;

}

KolejkaProcesow::~KolejkaProcesow() {
    Node* usuwacz;
    while (poczatek != nullptr) {
        usuwacz = poczatek;
        poczatek = (*poczatek).nast;
        delete usuwacz;
    }
}



void KolejkaProcesow::dodaj_do_kolejki(Proces &p) {
    //puszczamy biegacza po liście-niech szuka węzła z danym PID
    int pid_procesu_p=p.dajPID() ;
    Node*biegacz;
    Node*zaplecze_biegacza;
    biegacz=poczatek;
    zaplecze_biegacza=NULL;
    while(biegacz!=NULL){
        if((*biegacz).dane.dajPID()==pid_procesu_p)break;
        zaplecze_biegacza=biegacz;
        biegacz=(*biegacz).nast;
    }
    if(biegacz==NULL){
        Node*nowy=new Node(p);
        if(poczatek==NULL){
            poczatek=nowy;
        }
        else
            (*zaplecze_biegacza).nast=nowy;
        ileJest++;

    }
    else{
        int L=(*biegacz).dane.dajWatki();
        (*biegacz).dane.ustawWatki(L+p.dajWatki());
    }
}