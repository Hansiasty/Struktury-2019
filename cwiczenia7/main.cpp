#include <iostream>
#include "Lista.h"
int main() {
    Lista L;
    L.wstaw(2);
    L.wstaw(5);
    L.wstaw(100);
    L.wstaw(7);
    L.wstaw(2);
    L.wypisz();
    return 0;
}