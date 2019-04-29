//
// Created by Bartłomiej Jóźwiak on 2019-04-08.
//

#ifndef CWICZENIA_8_TOWAR_H
#define CWICZENIA_8_TOWAR_H
#include <iostream>
using namespace std;

struct Towar{
private:
    int kod;
    float ilosc;
public:
    Towar(int i, float d);
   int setKod(int a);
   float setIlosc(float a);
    int getKod();
    float getIlosc();
    void wypiszTowar();
    bool operator<=(Towar &x);

};

#endif //CWICZENIA_8_TOWAR_H
