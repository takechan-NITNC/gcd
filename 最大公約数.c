#include <stdio.h>
#include <stdlib.h>
int gcd(int number1, int number2)
{
	if (number1 < 0) {
		fprintf(stderr, "%sの%d行目：引数%dは負の数です。\n", __FILE__, __LINE__, number1);
		exit(1);
	}
	if (number2 < 0) {
		fprintf(stderr, "%sの%d行目：引数%dは負の数です。\n", __FILE__, __LINE__, number2);
		exit(1);
	}
	if (number1 < number2) {
		int tmp = number1;
		number1 = number2;
		number2 = tmp;
	}
	if (!number2) {
		return number1;
	}
	return gcd(number2, number1 % number2);
}