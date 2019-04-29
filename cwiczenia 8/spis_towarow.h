//
// Created by Bartłomiej Jóźwiak on 2019-04-08.
//

#ifndef CWICZENIA_8_SPIS_TOWAROW_H
#define CWICZENIA_8_SPIS_TOWAROW_H
using namespace std;
#include "towar.h"
struct Spis_towarow{
private:
    struct Box{
        Towar dane = Towar(0, 0);
        Box*nast;
        Box(Towar _dane, Box*_nast)
        {
            dane=_dane;
            nast=_nast;
        }
    };
    Box*pocz;
    int ileJest;

public:
    Spis_towarow();
    ~Spis_towarow();
    void wstaw(Towar t);
    void wypisz();
};
#endif //CWICZENIA_8_SPIS_TOWAROW_H
