#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>
 
double intPow (int, unsigned int);

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	unsigned int stepen;
	
	printf ("Введите число: ");
	scanf ("%d", &a);
	printf ("Введите его степень: ");
	scanf ("%u", &stepen);

	printf ("%d в степени %u = %.0f", a, stepen, intPow (a, stepen));

	_getch ();
	return 0;
}

double intPow (int x, unsigned int step) {
	unsigned int i;
	double resultat = 1;

	for (i = 1; i <= step; i++)
		resultat *= x;

	return resultat;
}
