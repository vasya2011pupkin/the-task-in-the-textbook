#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int a, x, i = 0;

   printf ("Введите год 1994-1999: ");
   scanf ("%d", &x);

   while (x != 1994 && x != 1995 && x != 1996 && x != 1997 && x != 1998 && x != 1999) {

	   printf ("Введите год 1994-1999: ");
	   scanf ("%d", &x);
   }

   switch (x) {
	   case 1994:
		   a = -4;
		   break;
	   case 1995:
		   a = -5;
		   break;
	   case 1996:
		   a = 1;
		   break;
	   case 1997:
		   a = -1;
		   break;
	   case 1998:
		   a = -2;
		   break;
	   case 1999:
		   a = -3;
		   break;
	   default:
		   ;
   }

   printf ("\n\n\n");
   printf ("\t\t\t\t\t%s\n", "ЯНВАРЬ");
   printf ("__________________________________________________\n\n");
   printf ("Пн\tВт\tСр\tЧт\tПт\tСб\tВс\n");
   printf ("__________________________________________________\n\n");

   for (; a <= 31; a++) {

	   i++;

	   if (a < 1)
		   printf ("\t");
	   else
		   printf ("%d\t", a);

	   if (i % 7 == 0) {
		   puts ("");
	     puts ("");
	   }

   }

   _getch ();
} 
