//
// Created by Bartłomiej Jóźwiak on 2019-03-25.
//

#ifndef CWICZENIA6_KOLEJKA_PROCESOW_H
#define CWICZENIA6_KOLEJKA_PROCESOW_H
#include "proces.h"

struct KolejkaProcesow{
private:
    struct Node{
        Proces dane;
        Node* nast;
        Node(Proces p, Node* N=nullptr)
        {dane=p;nast=N;}

    };
    Node* poczatek;
    int ileJest;
public:
    KolejkaProcesow();
    ~KolejkaProcesow();
    void wypisz();
    void dodaj_do_kolejki(Proces&p);
    void przestaw_na_poczatek(int proc_id);

};
#endif //CWICZENIA6_KOLEJKA_PROCESOW_H
