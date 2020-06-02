#include "pola.h"
#include "objetosc.h"
#include <iostream>

using namespace std;

int main(){
    int a, b, h;
    cout<<"Podaj dlugosc boku."<<endl;
    cin>>a;
    cout<<"Podaj dlugosc drugiego boku."<<endl;
    cin>>b;
    cout<<"Podaj wysokosc."<<endl;
    cin>>h;
    int poleProstokat, poleProstopadloscian, objetoscProstokat, objetoscProstopadloscian;
    poleProstokat = poleProstokat(a,b);
    poleProstopadloscian = poleProstopadloscian(a,b,h);
    objetoscProstokat = objetoscProstokat(a,b);
    objetoscProstopadloscian = objetoscProstopadloscian(a,b,h);
    cout<<"Pole prostokata o podanych bokach: "<<poleProstokat<<endl;u
    cout<<"Pole prostopadloscianiu o podanych bokach: "<<poleProstopadloscian<<endl;
    cout<<"Objetosc prostopadloscianiu o podanych bokach: "<<objetoscProstopadloscian<<endl;
    return 0;
}
