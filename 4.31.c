#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int x, y, a = 9 - 2;

   for (x = 1; x <= 9; x++) {

	   if (x <= 9 - 9 / 2) {

	      for (y = 9 - (9 / 2) - x; y >= 1; y--)
		      printf (" ");
	      for (y = x + (x - 1); y >= 1; y -= 1)
		      printf ("*");

	      puts ("");
	   }

	   else {
		   for (y = x - (9 - 9 / 2); y >= 1; y--)
			   printf (" ");
		   for (y = a; y >= 1; y--)
			   printf ("*");

		   a -= 2;
		   puts ("");
	   }

   }
   
   _getch ();
} 
