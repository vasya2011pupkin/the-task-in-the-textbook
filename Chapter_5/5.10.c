#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	
	int i;
	float x;

	for (i = 1; i <= 3; i++) {
		printf ("Введите %d-e число, которое следует округлить до ближайшего целого: ", i);
		scanf ("%f", &x);
		printf ("Введено число %.2f, ближайшее челое: %.2f\n\n", x, floor (x + 0.5));
	}

	_getch ();
	return 0;
}
