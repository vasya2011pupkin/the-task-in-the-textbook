#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	double n;
	int i;

	srand (time (NULL));

	printf ("%s", "a)");
	for (i = 1; i <= 10; i++)  
		printf ("%.0f\t", n = 1 + rand () % 2);

	printf ("\n\n%s", "b)");
	for (i = 1; i <= 10; i++)  
		printf ("%.0f\t", n = 1 + rand () % 100);

	printf ("\n\n%s", "c)");
	for (i = 1; i <= 10; i++)  
		printf ("%.0f\t", n = rand () % 10);

	printf ("\n\n%s", "d)");
	for (i = 1; i <= 10; i++)  
		printf ("%.0f\t", n = 1000 + rand () % 113);

	printf ("\n\n%s", "e)");
	for (i = 1; i <= 10; i++)  
		printf ("%.0f\t", n = -1 + rand () % 3);

	printf ("\n\n%s", "f)");
	for (i = 1; i <= 10; i++)  
		printf ("%.0f\t", n = -3 + rand () % 15);

	_getch ();
	return 0;
}
