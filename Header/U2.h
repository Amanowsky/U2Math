#ifndef U2_H_
#define U2_H_

#include<iostream>
using std::string;
using std::ostream;
class U2
{
private:
	char* _integerPart;
	char* _fractionalPart;
public:
	U2(const char* fullNumber);
	U2(const char* integerPart, const char* fractionalPart);
	~U2();
	char* getIntegerPart();
	char* getFractionalPart();
	friend std::ostream& operator<<(std::ostream& os, const U2& u2);
};


#endif