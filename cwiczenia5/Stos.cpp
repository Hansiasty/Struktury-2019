//
// Created by Bartłomiej Jóźwiak on 2019-03-18.
//

#include "Stos.h"
#include <iostream>
using namespace std;
Stos::Stos() {
    rozmiar=0;
    wierzcholek=nullptr;
}
Stos::~Stos() {
    Node* usuwacz;
    while (wierzcholek != nullptr) {
        usuwacz = wierzcholek;
        wierzcholek = (*wierzcholek).nast;
        delete usuwacz;
    }
}
void Stos::wypisz() {
    Node *biegacz;
    biegacz = wierzcholek;
    while (biegacz != nullptr) {
        cout << (*biegacz).dane << endl;
        biegacz = (*biegacz).nast;
    }
}
void Stos::wstaw(int a){
    Node*nowy=new Node(a);
    (*nowy).nast=wierzcholek;
    wierzcholek=nowy;
    rozmiar++;

}

int Stos::zdejmij() {
    if(rozmiar==0) throw runtime_error("stos pusty");
    int liczba=(*wierzcholek).dane;
    Node *kiler;
    kiler=wierzcholek;
    wierzcholek=wierzcholek->nast;
    delete kiler;
    return liczba;
}
