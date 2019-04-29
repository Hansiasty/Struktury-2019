#include <iostream>
#include "kolejka.h"
using namespace std;
int main() {
Kolejka k;
int L;
cout<<"tworzymy kolejke, 999 konczy wpisywanie"<<endl;
while(true)
{
    cout<<"podaj liczbe"<<endl;
    cin>>L;
    if(L==999) break;
    k.wstaw(L);
    k.wypisz();
}
    int a;
    while(true){
        try{
            a=k.usun();
            cout<<"usunalem"<<a<<endl;
            cout<<"pozostala kolejka "<<endl;
            k.wypisz();
        }
        catch(exception&e){
            cout<<e.what();
            break;

        }
return 0;

}



}