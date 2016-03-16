#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>

int chetnoe (int);

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	
	printf ("%s", "Введите число: ");

	while (scanf ("%d", &a) != EOF) {
		if (chetnoe (a))
      printf ("%d - Чётное число\n\n", a);
		else
		  printf ("%d - Не чётное число\n\n", a);
	}

	_getch ();
	return 0;
}

int chetnoe (int chis1) {
	return !(chis1 % 2);
}
