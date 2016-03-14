#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>
#include <math.h>
 
double gipotenuza (double, double);

int main()
{
	setlocale(LC_ALL, "Russian");
	
	double a1 = 3.0, a2 = 4.0, b1 = 5.0, b2 = 12.0, c1 = 8.0, c2 = 15.0;

	printf ("Треугольник №1\nСторона 1 = %.2f   Сторона 2 = %.2f   Гипотенуза = %.2f\n\n", a1, a2, gipotenuza (a1, a2));
	printf ("Треугольник №2\nСторона 1 = %.2f   Сторона 2 = %.2f   Гипотенуза = %.2f\n\n", b1, b2, gipotenuza (b1, b2));
	printf ("Треугольник №3\nСторона 1 = %.2f   Сторона 2 = %.2f   Гипотенуза = %.2f\n\n", c1, c2, gipotenuza (c1, c2));

	_getch ();
	return 0;
}

double gipotenuza (double kat1, double kat2) {
	return sqrt (kat1 * kat1 + kat2 * kat2);
}
