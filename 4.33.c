#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int a, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;

   for (a = 1; a <= 100; a++) {
 
	   x1 = a / 1000000000;

	   x2 = a % 1000000000 / 100000000;

	   x3 = a % 1000000000 % 100000000 / 10000000;

	   x4 = a % 1000000000 % 100000000 % 10000000 / 1000000;

	   x5 = a % 1000000000 % 100000000 % 10000000 % 1000000 / 100000;

	   x6 = a % 1000000000 % 100000000 % 10000000 % 1000000 % 100000 / 10000;
 
	   x7 = a % 1000000000 % 100000000 % 10000000 % 1000000 % 100000 % 10000 / 1000;

	   x8 = a % 1000000000 % 100000000 % 10000000 % 1000000 % 100000 % 10000 % 1000 / 100;

	   x9 = a % 1000000000 % 100000000 % 10000000 % 1000000 % 100000 % 10000 % 1000 % 100 / 10;

	   x10 = a % 1000000000 % 100000000 % 10000000 % 1000000 % 100000 % 10000 % 1000 % 100 % 10;

	   printf ("%d = ", a);

	   if (x8 == 1) //Сотни
		   printf ("%c", 'C');
	   if (x9 == 9) //Десятки
		   printf ("%s", "XC");
	   if (x9 == 8)
		   printf ("%s", "LXXX");
	   if (x9 == 7)
		   printf ("%s", "LXX");
	   if (x9 == 6)
		   printf ("%s", "LX");
	   if (x9 == 5)
		   printf ("%s", "L");
	   if (x9 == 4)
		   printf ("%s", "XL");
	   if (x9 == 3)
		   printf ("%s", "XXX");
	   if (x9 == 2)
		   printf ("%s", "XX");
	   if (x9 == 1)
		   printf ("%s", "X");
	   if (x10 == 9) //Еденицы
		   printf ("%s", "IX");
	   if (x10 == 8)
		   printf ("%s", "VIII");
	   if (x10 == 7)
		   printf ("%s", "VII");
	   if (x10 == 6)
		   printf ("%s", "VI");
	   if (x10 == 5)
		   printf ("%s", "V");
	   if (x10 == 4)
		   printf ("%s", "IV");
	   if (x10 == 3)
		   printf ("%s", "III");
	   if (x10 == 2)
		   printf ("%s", "II");
	   if (x10 == 1)
		   printf ("%s", "I");

	   puts ("");

   }

   _getch ();
} 
