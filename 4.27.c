#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int s1, s2, g; 
   
   for (s1 = 1; s1 <= 500; s1++) {

	   for (s2 = 1; s2 <= 500; s2++) {
	   
		   for (g = 1; g <= 500; g++) {
			   if (s1 * s1 + s2 * s2 == g * g)
				   printf ("s1 = %d    s2 = %d    g = %d\n", s1, s2, g);
		   }
	   }
   }
   _getch ();
} 
