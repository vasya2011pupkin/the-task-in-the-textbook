#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int x, y, a, r;

   printf ("%s", "Введите размер ромба (-1 для выхода): ");
   scanf ("%d", &r);

   while (r != -1) {

	   a = r - 2;
	   puts ("");
	   puts ("");

	   for (x = 1; x <= r; x++) {

		   if (x <= r - r / 2) {

			  for (y = r - (r / 2) - x; y >= 1; y--)
				  printf (" ");
			  for (y = x + (x - 1); y >= 1; y -= 1)
				  printf ("*");

			  puts ("");
		   }

		   else {
			   for (y = x - (r - r / 2); y >= 1; y--)
				   printf (" ");
			   for (y = a; y >= 1; y--)
				   printf ("*");

			   a -= 2;
			   puts ("");
		   }

	   }

	   printf ("\n\n%s", "Введите размер ромба (-1 для выхода): ");
	   scanf ("%d", &r);
   }
   
   _getch ();
} 
