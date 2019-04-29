//
// Created by Bartłomiej Jóźwiak on 2019-04-01.
//

#ifndef CWICZENIA7_LISTA_H
#define CWICZENIA7_LISTA_H
struct Lista {
private:
    struct Box { ;
        int dane;
        Box *nast;
        Box(int D, Box *adres = nullptr) {
            dane=D;
            nast=adres;

        }
    };

//pola listy
    Box *pocz;
    int ilejest; //opcjonalne
public:
    Lista();
    ~Lista();
    void wypisz();
    void wstaw(int a); //zakladamy ze lista jest posortowana, wstawiamy "wagoniki" z liczba a tak zeby nadal byla posortowana
void usunJeden(int a);
// void usunWszystkie(int a); //usuwa wszystko z elementem a
};
#endif //CWICZENIA7_LISTA_H
