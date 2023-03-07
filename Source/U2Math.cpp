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
	* 
	* Edit Uciecie bita (pamietaæ Adam)
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
	* 1 Sposób 
	* Wyszukujemy wiêkszej liczby nie zwracaj¹æ uwagi na znak czyli -34 12 porównujemy 34 i 12
	* odejmujemy wiêksz¹ od mniejszej
	* pamiêtamy o przesunieciach
	* wynik bêdzie mia³ znak wiêkszej liczbny tzn (12 - 24 = - 12 a 24 - 12 = - 12 (bo zmienimy znak pamiêtaj¹c ¿e 24 jest ujemne liczbê bêdziemy liczyæ normalnie na 10)
	* 
	* 2. Sposób odejmujemy jak jest
	* 5 - 15 = - 10 nie zamieniamy
	* 1 sposób wydajê siê ³atwiejszy poniewa¿
	* wiêksz¹ siê ³atwiej odejmuje od mniejszej
	*/
	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

U2 U2Math::multiply(U2* firstU2, U2* secondU2)
{
	/*
	Mno¿enie mamy 4 sposoby
	1. Metoda Zwyk³a
	2. Metoda Bez rozszerzeñ
	3. Metoda Bootha
	4. Metda Bootha - Mcscorlaya
	Czwarta metoda najmniej chyba liczenia ale warunki typu liczba >1 przesuniêcie dodatkowe bita

	*/
	
	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

U2 U2Math::divide(U2* firstU2, U2* secondU2)
{
	/*
	Mno¿enie mamy 4 sposoby
	1. Nieodtwarzaj¹ce
	2. Odtwarzaj¹ce
	Robimy nieodtwarzj¹ce 

	*/

	U2 u5("232", "21"); //¿eby b³êdu nie by³o to coœ zwracam
	return u5;
}

U2 U2Math::power(U2* firstU2, double exponent) {
	/*
		Przerobienie na u³amek zwyk³y (sprawdzenie czy siê skróci 1.64 = 164/100 = 41/25)
		Dwie pêtle jedna mno¿¹ca liczbê 41 jeden razy
		druga dziel¹ca 25 razy (potencjalnie mo¿e byæ ³atwiej zrobiæ sprawdziæ)
		if dla potêgi 0 = 1
	*/
}

U2Math::U2 squareRoot(U2* firstU2) {
	/*
	* zwyk³e dzielenie tej samej liczby
	*/
}


bool U2Math::isBigger(U2* firstU2, U2* secondU2)
{
	/*
	* Metoda porównuj¹ca dwie liczby zwracaj¹ca prawdê lub fa³sz (nadpisaæ operator w U2 > i < potem funkcja nie potrzebna)
	* Usunê przy nastêpnym pisaniu kodu ¿eby nie zapomnieæ ¿e coœ mia³em zrobiæ.
	*/
}
