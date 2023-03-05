#include "U2Math.h"

U2 U2Math::add(U2* firstU2,U2* secondU2)
{
	int* integerFirstU2 = new int[strlen(firstU2->getIntegerPart())];
	int* fractionalFirstU2 = new int[strlen(firstU2->getFractionalPart())];
	int* integerSecondU2 = new int[strlen(firstU2->getIntegerPart())];
	int* fractionalSecondU2 = new int[strlen(firstU2->getFractionalPart())];
	/*
	* PROBLEM 1 i 1
	* CZʌ� CA�KOWITA
	* (1 spos�b) Rekurencja dodawania a� przeniesienie = 0 
	(pami�taj�� �e przeniesienie musi by� na swoim miejscu)
	* Musimy wiedzie� 1 bit je�eli jest 1 to albo traktujemy to jako -1 albo normalizacja
	* Dodajemy w p�tli o d�ugo�ci kr�tszej liczby
	* Jak jedna liczba jest d�u�sza to cz�� kt�ra pozostaje insert do wyniku
	* przed to co nam wysz�o i zaczynamy dodawa� uzupe�nienie znowu funkcj� add(wynik, uzu)
	* (2 spos�b) Dodawanie tak samo tylko b�dziemy od razu dodawa� uzupe�nienie if(=0) if(=1)
	* My�l� �e lepsze 
	* Cz�� u�amkow� analogicznie
	* p�tla tam gdzie jest kr�tsza u�amkowa
	* dodajemy i potem insert
	* (z insertem trzeba uwa�a� na ostatnie przesuni�cie!!!)
	*/


	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

U2 U2Math::normalize()
{
	/*
	* Gdy 0 chyba nie trzeba wykonywa� dodatkowych operacji
	* Gdy 1 odejmujemy od 1 ka�dy bit i dodajemy 1 do najm�odszego
	*/
	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

double U2Math::toDecimal(U2* u2)
{
	/*
	Zamiana z U2 na 10
	1. 1 Petla o d�ugosci cz�ci ca�kowitej
	2. i b�dzie nasz pot�ga b�dziemy szli od prawej do lewej tablica[dlugosc-i-1?]
	gdy dochodzimy do bitu najstarszego to dwie opcje
	0 - nic sie nie dzieje (liczba dodatnia)
	1 - potega tej liczby bedzie ujemna do winiku (liczba ujemna)
	
	3. Petla czesc ulamkowa
	4. od lewej do prawej potegi 
	5. Teraz albo robimy tablice char* i konwertujemy na double 
	   String i konwersja na double
	   Zwraca nam gotow� liczb� w 10 do por�wnania czy te� wypisania
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
	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

U2 U2Math::multiply(U2* firstU2, U2* secondU2)
{

	
	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

bool U2Math::isBigger(U2* firstU2, U2* secondU2)
{
	if (firstU2->getIntegerPart()[0] == secondU2->getIntegerPart()[0]) 
	{
		if (strlen(firstU2->getIntegerPart()) == strlen(secondU2->getIntegerPart()))
		{
			//Nie wiem czy na ten moment jest prawid�owo zastanowimy si� punkt 12
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
