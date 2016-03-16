#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>
 
int kratnoe (int, int);

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	
	printf ("%s", "Введите первое число: ");
	scanf ("%d", &a);

	if (a != -1) {
		printf ("%s", "Введите второе число: ");
		scanf ("%d", &b);
	}

	while (a != -1) {
		if (kratnoe (a, b))
			printf ("%d кратно %d\n\n", b, a);
		else
	        printf ("%d не кратно %d\n\n", b, a);

		printf ("%s", "Введите первое число: ");
		scanf ("%d", &a);

		if (a != -1) {
			printf ("%s", "Введите второе число: ");
		    scanf ("%d", &b);
		}
	}

	_getch ();
	return 0;
}

int kratnoe (int chis1, int chis2) {
	if (chis2 % chis1 == 0)
		return 1;
	else
		return 0;
	// return !(chis2 % chis1);
}
