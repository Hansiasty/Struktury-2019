#include <iostream>
#include "spis_towarow.h"
int main() {
int a; float b;
Spis_towarow st;
cout<<"podaj kod";
cin>>a;
cout<<"podaj ilosc";
cin>>b;
Towar x(a, b);
x.setKod(a);
x.setIlosc(b);
x.wypiszTowar();

}