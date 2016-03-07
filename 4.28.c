#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  setlocale(LC_ALL, "Russian");

  int x, ch, prod; 
  float val;

  printf ("%s", "Введите код группы работника 1 - 4 (-1 для выхода): ");
  scanf ("%d", &x);
   
  while (x != EOF) {
  
    switch (x) {
	   case 1:
		   printf ("Ваша зарплата %.2f руб.\n\n", 12000.00);
		   break;
	   case 2:
		   printf ("%s", "Введите количество отработанных вами часов: ");
		   scanf ("%d", &ch);

		   if (ch > 40)
			   printf ("Ваша зарплата %.2f руб.\n\n", 40 * 300 + (ch - 40) * 300 * 1.5);
		   else
			   printf ("Ваша зарплата %.2f руб.\n\n", ch * 300.00 );
		   break;
	   case 3:
		   printf ("%s", "Введите обьём ваших валовых продаж: ");
		   scanf ("%f", &val);
		   printf ("Ваша зарплата %.2f руб.\n\n", 12000 + val * 0.057);
		   break;
	   case 4:
		   printf ("%s", "Сколько едениц продукции вы произвели: ");
		   scanf ("%d", &prod);
		   printf ("Ваша зарплата %.2f руб.\n\n", 300.00 * prod);
		   break;
	   default:
		   puts ("Не коректный ввод данных !!!\n");
		   break;
	   }

	   printf ("%s", "Введите код группы работника 1 - 4 (-1 для выхода): ");
	   scanf ("%d", &x);
   }
   _getch ();
} 
