#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int x = 6, y = 3; 
   int a = 3, b = 3, g = 5;
   int m = 9, n = 11;
   int i = 1, j = 7;

   if ( !(x < 5) && !(y >= 7) )
	   printf ("Базовое выражение истинно\n");
   if ( !(x < 5 || y >= 7) )
	   printf ("Выражение Моргана истинно\n\n\n");

   if ( !(a == b) || !(g != 5) )
	   printf ("Базовое выражение истинно\n");
   if ( !(a == b && g != 5) )
	   printf ("Выражение Моргана истинно\n\n\n");

   if ( !(m <= 8 && n > 4) )
	   printf ("Базовое выражение истинно\n");
   if ( !(m <= 8) || !(n > 4) )
	   printf ("Выражение Моргана истинно\n\n\n");

   if ( !(i > 4 || j <= 6) )
	   printf ("Базовое выражение истинно\n");
   if ( !(i > 4) && !(j <= 6) )
	   printf ("Выражение Моргана истинно\n\n\n");
     
   _getch ();
} 
