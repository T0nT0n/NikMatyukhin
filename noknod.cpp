#include <clocale>
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int NOKab(int a,int b);
int NODab(int a,int b);

int main()
{
	int a = 0, b = 0, NOK = 0, NOD = 0;

	setlocale(0,"");
	printf("Введите два числа A и B: \n");
	scanf("%d%d", &a, &b);

	NOK = NOKab(a,b);

	NOD = NODab(a,b);

	printf("\n\tВычесленное НОК чисел %d и %d равно %d\n\tВычесленный НОД чисел %d и %d равен %d\n", a,b,NOK,a,b,NOD);

	if (a > b) printf("Кстати, a > b"); else if (a < b) printf("Кстати, a < b"); else printf("Кстати, a == b");

	return 0;
}

int NOKab(int a,int b)
{
	int NOK = 0;
	if (a > b) NOK = a; else NOK = b;
	while (NOK % a !=0 || NOK % b !=0) NOK = NOK + 1;
	return NOK;
}

int NODab(int a,int b)
{
	int NOD = 0;
	while(a != b){ if (a > b) {a -= b; } else { b -= a; } } NOD = a;
	return NOD;
}
