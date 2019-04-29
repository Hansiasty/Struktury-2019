//
// Created by Bartłomiej Jóźwiak on 2019-04-08.
//

#include"towar.h"
#include <iostream>
using namespace std;

Towar::Towar(int i, float d) {
kod=0;
ilosc=0.0;
}
int Towar::setKod(int a) {
    kod=a;
}
float Towar::setIlosc(float a) {
    ilosc=a;
}
int Towar::getKod() {
    return kod;
}
float Towar::getIlosc() {
    return ilosc;
}
bool Towar::operator<=(Towar &x) {
    if(kod<=x.kod)
        return true;
    else
        return false;
};
void Towar::wypiszTowar() {
    cout<<"kod towaru: "<<getKod()<<"Ilosc towaru: "<<getIlosc()<<endl;
};
