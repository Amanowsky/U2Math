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
	* 
	* Edit Uciecie bita (pamieta� Adam)
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
	* 1 Spos�b 
	* Wyszukujemy wi�kszej liczby nie zwracaj�� uwagi na znak czyli -34 12 por�wnujemy 34 i 12
	* odejmujemy wi�ksz� od mniejszej
	* pami�tamy o przesunieciach
	* wynik b�dzie mia� znak wi�kszej liczbny tzn (12 - 24 = - 12 a 24 - 12 = - 12 (bo zmienimy znak pami�taj�c �e 24 jest ujemne liczb� b�dziemy liczy� normalnie na 10)
	* 
	* 2. Spos�b odejmujemy jak jest
	* 5 - 15 = - 10 nie zamieniamy
	* 1 spos�b wydaj� si� �atwiejszy poniewa�
	* wi�ksz� si� �atwiej odejmuje od mniejszej
	*/
	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

U2 U2Math::multiply(U2* firstU2, U2* secondU2)
{
	/*
	Mno�enie mamy 4 sposoby
	1. Metoda Zwyk�a
	2. Metoda Bez rozszerze�
	3. Metoda Bootha
	4. Metda Bootha - Mcscorlaya
	Czwarta metoda najmniej chyba liczenia ale warunki typu liczba >1 przesuni�cie dodatkowe bita

	*/
	
	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

U2 U2Math::divide(U2* firstU2, U2* secondU2)
{
	/*
	Mno�enie mamy 4 sposoby
	1. Nieodtwarzaj�ce
	2. Odtwarzaj�ce
	Robimy nieodtwarzj�ce 

	*/

	U2 u5("232", "21"); //�eby b��du nie by�o to co� zwracam
	return u5;
}

U2 U2Math::power(U2* firstU2, double exponent) {
	/*
		Przerobienie na u�amek zwyk�y (sprawdzenie czy si� skr�ci 1.64 = 164/100 = 41/25)
		Dwie p�tle jedna mno��ca liczb� 41 jeden razy
		druga dziel�ca 25 razy (potencjalnie mo�e by� �atwiej zrobi� sprawdzi�)
		if dla pot�gi 0 = 1
	*/
}

U2Math::U2 squareRoot(U2* firstU2) {
	/*
	* zwyk�e dzielenie tej samej liczby
	*/
}


bool U2Math::isBigger(U2* firstU2, U2* secondU2)
{
	/*
	* Metoda por�wnuj�ca dwie liczby zwracaj�ca prawd� lub fa�sz (nadpisa� operator w U2 > i < potem funkcja nie potrzebna)
	* Usun� przy nast�pnym pisaniu kodu �eby nie zapomnie� �e co� mia�em zrobi�.
	*/
}
