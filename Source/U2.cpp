#include "U2.h"
#include <cstring>

U2::U2(const char* fullNumber) 
{
	const char* dot = strchr(fullNumber, '.');
	if (dot == nullptr)
	{
		_integerPart = new char[strlen(fullNumber) + 1];
		strcpy(_integerPart, fullNumber);
		_fractionalPart = new char[1];
		_fractionalPart[0] = '\0';

	}
	else
	{
		_integerPart = new char[dot - fullNumber + 2]; //jeden wiêcej od razu by uniknaæ sytuacji gdy liczba jest .xxxx
		if (dot - fullNumber != 0) {
			_integerPart[dot - fullNumber] = '\0';
		}
		else
		{
			_integerPart[dot - fullNumber] = '0';
			_integerPart[dot - fullNumber + 1] = '\0';
		}
		
		strncpy(_integerPart, fullNumber, dot- fullNumber);
		_fractionalPart = new char[strlen(dot)];
		strcpy(_fractionalPart, dot + 1);
	}
}

U2::U2(const char * integerPart, const char* fractionalPart)
{
	_integerPart = new char[strlen(integerPart) + 1];
	strcpy(_integerPart, integerPart);
	_fractionalPart = new char[strlen(fractionalPart) + 1];
	strcpy(_fractionalPart, fractionalPart);
}



U2::~U2()
{
	delete[] _integerPart;
	delete[] _fractionalPart;
}

char* U2::getIntegerPart()
{
	return _integerPart;
}

char* U2::getFractionalPart()
{
	return _fractionalPart;
}

std::ostream& operator<<(std::ostream& os, const U2& u2)
{
	
	for (int i = 0; i < strlen(u2._integerPart); i++)
		os << u2._integerPart[i];
	if(u2._fractionalPart[0] != '\0')
		std::cout << '.';
	for (int i = 0; i < strlen(u2._fractionalPart); i++)
		os << u2._fractionalPart[i];
	return os;
}

