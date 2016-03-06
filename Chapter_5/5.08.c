#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	printf ("fabs (%.1f) = %.1f\n\n", 7.5, fabs (7.5));

	printf ("floor (%.1f) = %.1f\n\n", 7.5, floor (7.5));

	printf ("fabs (%.1f) = %.1f\n\n", 0.0, fabs (0.0));

	printf ("ceil (%.1f) = %.1f\n\n", 0.0, ceil (0.0));

	printf ("fabs (%.1f) = %.1f\n\n", -6.4, fabs (-6.4));

	printf ("ceil (%.1f) = %.1f\n\n", -6.4, ceil (-6.4));

	printf ("ceil (%s) = %.1f\n\n", "-fabs (-8 + floor (-5.5))", ceil (-fabs (-8 + floor (-5.5))));
	
	_getch ();
	return 0;
}
