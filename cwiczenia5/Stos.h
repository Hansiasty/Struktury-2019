//
// Created by Bartłomiej Jóźwiak on 2019-03-18.
//

#ifndef CWICZENIA5_STOS_H
#define CWICZENIA5_STOS_H
struct Stos{
private:
    struct Node{
       int dane;
       Node*nast;
       Node(int D, Node*N=nullptr){
           dane=D;
           nast=N;
       }
    };
    Node *wierzcholek;
    int rozmiar;
public:
    Stos();
    ~Stos();
    void wypisz();
    void wstaw(int a);
    int zdejmij();
};
#endif //CWICZENIA5_STOS_H
