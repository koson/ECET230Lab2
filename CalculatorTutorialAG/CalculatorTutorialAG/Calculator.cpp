#include "pch.h"
#include "Calculator.h"
#include <iostream>

using namespace std;


double Calculator::Calculate(double x, char oper, double y)
{
	switch(oper) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		if (y != 0) {
			return x / y;
		} else {
			cout << "Divide by 0? Not today.\n";
			return 0.0;
		}
	default:
		return 0;
	}
}
