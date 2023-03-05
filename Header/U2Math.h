#ifndef U2MATH_H_
#define U2MATH_H_
#include "U2.h"
class U2Math 
{
public:
	static U2 add(U2* firstU2, U2* secondU2);
	static U2 normalize();
	static double toDecimal(U2* u2);
	static U2 substract(U2* firstU2, U2* secondU2);
	static U2 multiply(U2* firstU2, U2* secondU2);
	static U2 multiply(U2* firstU2, U2* secondU2, int length);
	static U2 divide(U2* firstU2, U2* secondU2);
	static U2 divide(U2* firstU2, U2* secondU2, int length);
	static U2 power(U2* firstU2, U2* secondU2);
	static U2 power(U2* firstU2, U2* secondU2, int length);
	static U2 squareRoot(U2* firstU2, U2* secondU2);
	static U2 squareRoot(U2* firstU2, U2* secondU2, int lenght);
	static U2 reciprocal(U2* u2);
private:
	bool isBigger(U2* firstU2, U2* secondU2);
};

#endif