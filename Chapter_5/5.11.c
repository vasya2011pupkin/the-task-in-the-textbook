#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>

double okrDoCel (double);
double okrDoDes (double);
double okrDoSot (double);
double okrDoTis (double);

int main()
{
	setlocale(LC_ALL, "Russian");
	
	double x;

	printf ("Введите число (-1 для выхода): ");
	scanf ("%lf", &x);

	while (x != -1) {
		printf ("\nВведено  число\tОкр. до цел.\tОкр. до дес.\tОкр. до сот.\tОкр. до тыс.\n");
		printf ("%f\t%f\t%f\t%f\t%f\n\n", x, okrDoCel (x), okrDoDes (x), okrDoSot (x), okrDoTis (x));

		printf ("Введите число (-1 для выхода): ");
		scanf ("%lf", &x);

	}

	_getch ();
	return 0;
}

double okrDoCel (double a) {
	return floor (a + 0.5);
}

double okrDoDes (double b) {
	return floor (b * 10 + 0.5) / 10;
}

double okrDoSot (double c) {
	return floor (c * 100 + 0.5) / 100;
}

double okrDoTis (double d) {
	return floor (d * 1000 + 0.5) / 1000;
}
