#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int i, x; 
   float sum = 0;

   for (i = 1, x = 1; i <= 500000; i += 2, x++) {

	   if (x % 2 == 1)
		   sum += 4.0 / i;
	   else
		   sum -= 4.0 / i; 

	   printf ("%.5f\n", sum);
   }
	   
   _getch ();
} 
