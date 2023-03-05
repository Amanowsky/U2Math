#include <stdio.h>
#include "U2Math.h"

int main() {
    //NAPRAWIC WSZYSTKO JUTRO OK SPOKO ALBO POTEM
    //jak?
    //tworzenie przez domyslny a nastepnie po prostu =
    //tworzenie liczby przez konstruktor
    //U2 number2("11100","110");
    //Czy w sumie oba?
   // std::cout << number2;
    U2 u2("122.111121212120");
    U2 u1("1232", "2312");
    U2 u4("0", "2312");
    U2 u5(".2312");
    std::cout << u2 << '\n';
    std::cout << u1 << '\n';
    std::cout << u4 << '\n';
    std::cout << u5 << '\n';

    //Math::add(number2, "1011011"); // nie dzia³a na ten moment 
    //d::cout << number2;
    U2 u3 = U2Math::add(&u1, &u2);
    std::cout <<"\n" << u3;
    return 0;
}