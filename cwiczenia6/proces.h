//
// Created by Bartłomiej Jóźwiak on 2019-03-25.
//

#ifndef CWICZENIA6_KOLEJKI_PROCESOW_H
#define CWICZENIA6_KOLEJKI_PROCESOW_H
struct Proces{
private:
    unsigned PID;
    unsigned l_watkow;
    void wypiszProces();
public:
    Proces(int P=0,int LW=1);
    int dajPID();
    int dajWatki();
    void ustawPID(int P);
    void ustawWatki(int LW);

};

#endif //CWICZENIA6_KOLEJKI_PROCESOW_H
