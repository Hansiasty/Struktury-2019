//
// Created by Bartłomiej Jóźwiak on 2019-03-04.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#ifndef UNTITLED_STOS_H
#define UNTITLED_STOS_H

struct Stos{
private:
    int max_rozm_stosu;
    int* dane;
    int ileJest;

public:
    Stos(int mrs=10);
    ~Stos();
    void wypisz();
    void wstaw(int a);
    int zdejmij();
    void wyczysc();


};

#endif //UNTITLED_STOS_H
