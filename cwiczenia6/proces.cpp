//
// Created by Bartłomiej Jóźwiak on 2019-03-25.
//
#include "proces.h"
#include <iostream>
using namespace std;
//sprawdzenie parametrow i rzucenie wyjatkiem jezeli nie sa
Proces::Proces(int P, int LW) {
    if(P>=0 && LW>0)
    {
        PID=P;
        l_watkow=LW;
    } else throw runtime_error("niewlasciwe parametry");
}
int Proces::dajPID() {
    return PID;
}
int Proces::dajWatki() {
    return l_watkow;
}
void Proces::ustawPID(int P) {
    //kontrola czy parametr jest dobry
    PID=P;
}
void Proces::ustawWatki(int LW) {
    l_watkow=LW;
}

