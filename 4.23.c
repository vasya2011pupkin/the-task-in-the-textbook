#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   unsigned int sumf, year, sumn = 100000, stavka, i;
   float st;
   
   for (stavka = 5; stavka <= 10; stavka++)  {

      printf ("\n%4s%21s\tСтавка: %.2f\n", "Год", "Сумма на депозите", stavka / 100.0);

      for (year = 1; year <= 10; year++) {
			  st = 1;
			  for (i = year; i >= 1; i--) {
			    st *= (1.0 + stavka / 100.0);
			  }

	      sumf = sumn * st;
	      printf ("%4d%21d.%d\n", year, sumf / 100, sumf % 100);
      }
   }

   _getch ();
} 
