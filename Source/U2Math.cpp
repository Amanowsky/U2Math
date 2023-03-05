#include "U2Math.h"

U2 U2Math::add(U2* firstU2,U2* secondU2)
{
	int* integerFirstU2 = new int[strlen(firstU2->getIntegerPart())];
	int* fractionalFirstU2 = new int[strlen(firstU2->getFractionalPart())];
	int* integerSecondU2 = new int[strlen(firstU2->getIntegerPart())];
	int* fractionalSecondU2 = new int[strlen(firstU2->getFractionalPart())];
	/*
	* PROBLEM 1 i 1
	* CZÊŒÆ CA£KOWITA
	* (1 sposób) Rekurencja dodawania a¿ przeniesienie = 0 
	(pamiêtaj¹æ ¿e przeniesienie musi byæ na swoim miejscu)
	* Musimy wiedzieæ 1 bit je¿eli jest 1 to albo traktujemy to jako -1 albo normalizacja
	* Dodajemy w pêtli o d³ugoœci krótszej liczby
	* Jak jedna liczba jest d³u¿sza to czêœæ która pozostaje insert do wyniku
	* przed to co nam wysz³o i zaczynamy dodawaæ uzupe³nienie znowu funkcj¹ add(wynik, uzu)
	* (2 sposób) Dodawanie tak samo tylko bêdziemy od razu dodawaæ uzupe³nienie if(=0) if(=1)
	* Myœlê ¿e lepsze 
	* Czêœæ u³amkow¹ analogicznie
	* pêtla tam gdzie jest krótsza u³amkowa
	* dodajemy i potem insert
	* (z insertem trzeba uwa¿aæ na ostatnie przesuniêcie!!!)
	*/


	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

U2 U2Math::normalize()
{
	/*
	* Gdy 0 chyba nie trzeba wykonywaæ dodatkowych operacji
	* Gdy 1 odejmujemy od 1 ka¿dy bit i dodajemy 1 do najm³odszego
	*/
	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

double U2Math::toDecimal(U2* u2)
{
	/*
	Zamiana z U2 na 10
	1. 1 Petla o d³ugosci czêœci ca³kowitej
	2. i bêdzie nasz potêga bêdziemy szli od prawej do lewej tablica[dlugosc-i-1?]
	gdy dochodzimy do bitu najstarszego to dwie opcje
	0 - nic sie nie dzieje (liczba dodatnia)
	1 - potega tej liczby bedzie ujemna do winiku (liczba ujemna)
	
	3. Petla czesc ulamkowa
	4. od lewej do prawej potegi 
	5. Teraz albo robimy tablice char* i konwertujemy na double 
	   String i konwersja na double
	   Zwraca nam gotow¹ liczbê w 10 do porównania czy te¿ wypisania
	*/
	return 23.23;
}

U2 U2Math::substract(U2* firstU2, U2* secondU2)
{
	/*
	* 
	* 
	* 
	*/
	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

U2 U2Math::multiply(U2* firstU2, U2* secondU2)
{

	
	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

bool U2Math::isBigger(U2* firstU2, U2* secondU2)
{
	if (firstU2->getIntegerPart()[0] == secondU2->getIntegerPart()[0]) 
	{
		if (strlen(firstU2->getIntegerPart()) == strlen(secondU2->getIntegerPart()))
		{
			//Nie wiem czy na ten moment jest prawid³owo zastanowimy siê punkt 12
			//funkcja na dziesietny i porownanie wielkosci liczb
			//lub porowanie binarnych?
			//jak na dziesietnych sie nie uda idziemy na ulamkowe
			//
		}
		else if (strlen(firstU2->getIntegerPart()) > strlen(secondU2->getIntegerPart()))
		{
			return true;
		}
		return false;
	}
	else if (firstU2->getIntegerPart()[0] == '0')
	{
		return true;
	}

	return false;
}
