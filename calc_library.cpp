#include <cstring>
#include <cstdlib>
#include "calc_library.h"

enum  operation { PLUS, MINUS, MULTIPLY, DIVIDE, NONE = -1 };

operation Getoperation(char c) {
	if (c == '+')
		return PLUS;
	if (c == '-')
		return MINUS;
	if (c == '*')
		return MULTIPLY;
	if (c == '/')
		return DIVIDE;

	return NONE;
}

bool parse(const char* expression, double& a, double& b, operation& c)
{
	const char* oper = strpbrk(expression, "+-*/");
	if (oper == nullptr)
		return false;

	a = atof(expression);
	c = Getoperation(*oper);

	oper++;
	b = atof(oper);
	return true;

}


double plus(double a, double b) {
	return a + b;
}


double minus(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}




double calculate(char* expression) {
	double (*action[]) (double, double) = { plus, minus, multiply, divide };

	double a;
	double b;
	operation c;

	bool parse_correct = parse(expression, a, b, c);

	if (!parse_correct) { return 0; }

}