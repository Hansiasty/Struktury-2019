//
// Created by Bartłomiej Jóźwiak on 2019-03-11.
//

#ifndef CWICZENIA4_KOLEJKA_H
#define CWICZENIA4_KOLEJKA_H
struct Kolejka{
private:
    int* dane;
    int ileJest;
public:
    Kolejka();
    ~Kolejka();
    void wypisz();
    void wstaw(int a);
    int usun();
    void czysc();
    int rozmiar();
};
#endif //CWICZENIA4_KOLEJKA_H
