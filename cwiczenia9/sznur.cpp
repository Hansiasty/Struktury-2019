//
// Created by Bartłomiej Jóźwiak on 2019-04-15.
//

#include "sznur.h"
#include <iostream>
using namespace std;
Sznur::~Sznur() {
    Node* usuwacz;
    while (pocz != NULL) {
        usuwacz = pocz;
        pocz = (*pocz).nast;
        delete usuwacz;
    }
}
Sznur::Sznur() {
    pocz=NULL;
    ileJest=0;
}
void Sznur::wstaw(int _dane){
Node*nowy;
nowy=new Node(_dane, nullptr);
if(pocz==nullptr)
{
    pocz=nowy;
    ogon=nowy;
} else{(*ogon).nast=nowy;
ogon=nowy;
}
ileJest++;
}
void Sznur::wypisz(){
    Node *runner=pocz;
    cout<<"********************************"<<endl;
    while(runner!=NULL)
    {
        cout<<runner->dane<<"  ";
        runner=runner->nast;
    }
    cout<<endl<<"********************************"<<endl;
};
void Sznur::usunFragmenty(int N) {
    if(ileJest<N)
    {
        cout<<"za krotka lista do wykonania usuwania";
    } else
    {
        Node*przedFragment;
        Node*wsk1;
        Node*zliczacz;
        int licznikElem=0;
        przedFragment=pocz;
        wsk1=pocz;
        zliczacz=wsk1->nast;
        while(zliczacz->dane==wsk1->dane)
        {
            licznikElem++;
            zliczacz=zliczacz->nast;
        }
        if(licznikElem>=N)
        {
            for(int i=0;i<=N;i++)
            {
            }
        }
    }
}