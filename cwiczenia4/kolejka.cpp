//
// Created by Bartłomiej Jóźwiak on 2019-03-11.
//
#include <iostream>
#include "kolejka.h"
using namespace std;
Kolejka::Kolejka() {
    ileJest=0;
    dane=NULL;

}
Kolejka::~Kolejka() {
    if(ileJest>0)
    {
        delete [] dane;
    }
    cout<<"zniszczylem kolejke"<<endl;
}

void Kolejka::wstaw(int a) {
    int *nowa;
    try{
        nowa=new int [ileJest+1];
    }
    catch(exception&e){throw runtime_error("break pamieci");}
    for(int i=0;i<ileJest;i++)
    {
        nowa[i]=dane[i];
    }
    nowa[ileJest]=a;
    delete []dane;
    dane=nowa;
    ileJest++;
}

void Kolejka::wypisz() {
    for(int i=0;i<ileJest;i++)
    {
    cout<<dane[i];
    }
}

int Kolejka::usun() {
    int *nowa;
    try{
        nowa=new int [ileJest-1];
    }
    catch(exception&e){throw runtime_error("kolejka pusta");}
    int temp=dane[0];
    for(int i=1;i<ileJest;i++)
    {
        nowa[i]=dane[i];
    }
    delete []dane;
    dane=nowa;
    ileJest--;
    cout<<"usunalem"<<temp<<endl;
    return temp;
}

void Kolejka::czysc(){
    delete []dane;
    ileJest=0;
}
int Kolejka::rozmiar() {
    return ileJest;
}