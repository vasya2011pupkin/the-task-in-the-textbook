#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n, i;

	srand (time (NULL));

	printf ("a = %d\n", (1 + rand () % 5) * 2);
	printf ("b = %d\n", (1 + rand () % 5) * 2 + 1);
	printf ("c = %d\n", ((1 + rand () % 5) * 2 + 1) * 2);
	
	_getch ();
	return 0;
}
