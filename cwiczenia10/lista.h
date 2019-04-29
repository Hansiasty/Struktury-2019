//
// Created by Bartłomiej Jóźwiak on 2019-04-29.
//
#include <iostream>
using namespace std;
#ifndef CWICZENIA10_LISTA_H
#define CWICZENIA10_LISTA_H
template <typename T>
struct ListaSort{
private:
    struct Node{
        T dane;
        Node*nast;
        Node(T D,Node*adres=nullptr)
        {
            dane=D;
            nast=adres;
        }
    };
    Node*pocz;
    int ileJest;
public:
    ListaSort();
    ~ListaSort();
    void wypisz();
    void wstaw(T const&a);
    void usun(T const&a);

};

template<typename T>
ListaSort<T>::ListaSort()
{
    pocz=nullptr;
    ileJest=0;
}
template <typename T>
ListaSort<T>::~ListaSort() {
    Node* usuwacz;
    while (pocz != NULL) {
        usuwacz = pocz;
        pocz = (*pocz).nast;
        delete usuwacz;
    }
}
template<typename T>
void ListaSort<T>::wstaw(T const&a)
{
    Node*nowy=new Node(a);
    if (pocz== nullptr)
    {
        pocz=nowy;
    }
    else if (a<=(*pocz).dane)
    {
        (*nowy).nast=pocz;
        pocz=nowy;
    }
    else
    {
        Node*szukacz=pocz;
        Node*zaszukacz=nullptr;
        while(szukacz!=nullptr && (*szukacz).dane<a)
        {
            zaszukacz=szukacz;
            szukacz=(*szukacz).nast;
        }
        (*zaszukacz).nast=nowy;
        (*nowy).nast=szukacz;
    }
    ileJest++;

}

template <typename T>
void ListaSort<T>::wypisz() {
    Node*wypisywacz=pocz;
    for(int i=0;i<ileJest;i++)
    {
        cout<<wypisywacz->dane<<endl;
        wypisywacz=wypisywacz->nast;
    }
}
template <typename T>
void ListaSort<T>::usun(T const&a){
    Node*szukacz=pocz;
    Node*zaszukacz=nullptr;
    while(szukacz!=nullptr && (*szukacz).dane<a){
        zaszukacz=szukacz;
        szukacz=(*szukacz).nast;
    }
    if(szukacz!=nullptr && (*szukacz).dane==a)
    {
        if(szukacz==pocz)
        {
            pocz=(*szukacz).nast;

        }
        else
            (*zaszukacz).nast=(*szukacz).nast;
        delete szukacz;
        ileJest--;
    }
    else
        throw runtime_error("liczba nie wystepuje w liscie");
}
#endif //CWICZENIA10_LISTA_H
