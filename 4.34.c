#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int i = 250;

   printf ("%s    %s        %s    %s\n\n", "10-е", "2-е", "8-е", "16-е");

   for (i = 1; i <= 255; i++) {
	   printf ("%d\t", i);
	   
	   if (i < 256 && i >= 128)
		   printf ("%d%d%d%d%d%d%d%d   ", i / 128, i % 128 / 64, i % 128 % 64 / 32, i % 128 % 64 % 32 / 16, i % 128 % 64 % 32 % 16 / 8, i % 128 % 64 % 32 % 16 % 8 / 4, i % 128 % 64 % 32 % 16 % 8 % 4 / 2, i % 128 % 64 % 32 % 16 % 8 % 4 % 2 / 1);
	   else
		   if (i < 128 && i >= 64)
			   printf ("%d%d%d%d%d%d%d    ", i / 64, i % 64 / 32, i % 64 % 32 / 16, i % 64 % 32 % 16 / 8, i % 64 % 32 % 16 % 8 / 4, i % 64 % 32 % 16 % 8 % 4 / 2, i % 64 % 32 % 16 % 8 % 4 % 2 / 1);
		   else
			   if (i < 64 && i >= 32)
				   printf ("%d%d%d%d%d%d     ", i / 32, i % 32 / 16, i % 32 % 16 / 8, i % 32 % 16 % 8 / 4, i % 32 % 16 % 8 % 4 / 2, i % 32 % 16 % 8 % 4 % 2 / 1);
			   else
				   if (i < 32 && i >= 16)
					   printf ("%d%d%d%d%d      ", i / 16, i % 16 / 8, i % 16 % 8 / 4, i % 16 % 8 % 4 / 2, i % 16 % 8 % 4 % 2 / 1);
				   else
					   if (i < 16 && i >= 8)
						   printf ("%d%d%d%d       ", i / 8, i % 8 / 4, i % 8 % 4 / 2, i % 8 % 4 % 2 / 1);
					   else
						   if (i < 8 && i >= 4)
							   printf ("%d%d%d        ", i / 4, i % 4 / 2, i % 4 % 2 / 1);
						   else
							   if (i < 4 && i >= 2)
								   printf ("%d%d         ", i / 2, i % 2 / 1);
							   else
								   if (i == 1)
									   printf ("%d          ", i / 1);

	   if (i < 512 && i >= 64)
		   printf ("%d%d%d    ", i / 64, i % 64 / 8, i % 64 % 8 / 1);
	   else
		   if (i < 64 && i >= 8)
			   printf ("%d%d     ", i / 8, i % 8 / 1);
		   else
			   if (i < 8 && i >= 1)
				   printf ("%d      ", i / 1);

	   if (i < 256 && i >= 16) {
	      switch (i / 16) {
	      case 1:
		      printf ("%d", 1);
		      break;
	      case 2:
		      printf ("%d", 2);
		      break;
	      case 3:
		      printf ("%d", 3);
		      break;
	      case 4:
		      printf ("%d", 4);
		      break;
	      case 5:
		      printf ("%d", 5);
		      break;
	      case 6:
		      printf ("%d", 6);
		      break;
	      case 7:
		      printf ("%d", 7);
		      break;
	      case 8:
		      printf ("%d", 8);
		      break;
	      case 9:
		      printf ("%d", 9);
		      break;
	      case 10:
		      printf ("%c", 'A');
		      break;
	      case 11:
		      printf ("%c", 'B');
		      break;
	      case 12:
		      printf ("%c", 'C');
		      break;
	      case 13:
		      printf ("%c", 'D');
		      break;
	      case 14:
		      printf ("%c", 'E');
		      break;
	      case 15:
		      printf ("%c", 'F');
		      break;
	      }

	      switch (i % 16 / 1) {
		  case 0:
			  printf ("%d\n", 0);
			  break;
	      case 1:
		      printf ("%d\n", 1);
		      break;
		  case 2:
		      printf ("%d\n", 2);
		      break;
	      case 3:
		      printf ("%d\n", 3);
		      break;
	      case 4:
		      printf ("%d\n", 4);
		      break;
	      case 5:
		      printf ("%d\n", 5);
		      break;
	      case 6:
		      printf ("%d\n", 6);
		      break;
	      case 7:
		      printf ("%d\n", 7);
			  break;
		  case 8:
			  printf ("%d\n", 8);
	          break;
		  case 9:
			  printf ("%d\n", 9);
			  break;
		  case 10:
			  printf ("%c\n", 'A');
			  break;
		  case 11:
			  printf ("%c\n", 'B');
			  break;
		  case 12:
			  printf ("%c\n", 'C');
			  break;
		  case 13:
			  printf ("%c\n", 'D');
			  break;
		  case 14:
			  printf ("%c\n", 'E');
			  break;
		  case 15:
			  printf ("%c\n", 'F');
			  break;
		   }
	   }
		  
	   else
		   if (i < 16 && i >= 1)
			   switch (i / 1) {
			   case 1:
				   printf ("%d\n", 1);
				   break;
			   case 2:
				   printf ("%d\n", 2);
				   break;
			   case 3:
				   printf ("%d\n", 3);
				   break;
			   case 4:
				   printf ("%d\n", 4);
				   break;
			   case 5:
				   printf ("%d\n", 5);
				   break;
			   case 6:
				   printf ("%d\n", 6);
				   break;
			   case 7:
				   printf ("%d\n", 7);
				   break;
			   case 8:
				   printf ("%d\n", 8);
				   break;
			   case 9:
				   printf ("%d\n", 9);
				   break;
			   case 10:
				   printf ("%c\n", 'A');
				   break;
			   case 11:
				   printf ("%c\n", 'B');
				   break;
			   case 12:
				   printf ("%c\n", 'C');
				   break;
			   case 13:
				   printf ("%c\n", 'D');
				   break;
			   case 14:
				   printf ("%c\n", 'E');
				   break;
			   case 15:
				   printf ("%c\n", 'F');
				   break;
			   }

   }

   _getch ();
} 
