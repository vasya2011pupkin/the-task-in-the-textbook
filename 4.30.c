#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int grade; 
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0; 
   unsigned int fCount = 0; 

   puts( "Введите символьную оценку"  );
   puts( "Введите EOF символ для выхода."  );

   while ( ( grade = getchar() ) != EOF ) {

	   /*if (grade == 'A' || grade == 'a')
		   ++aCount;
	   if (grade == 'B' || grade == 'b')
		   ++bCount;
	   if (grade == 'C' || grade == 'c')
		   ++cCount;
	   if (grade == 'D' || grade == 'd')
		   ++dCount;
	   if (grade == 'F' || grade == 'f')
		   ++fCount;
	   if (grade != 'A' && grade != 'a' && grade != 'B' && grade != 'b' && grade != 'C' && grade != 'c' && grade != 'D' && grade != 'd' && grade != 'F' && grade != 'f')
		   if (grade != '\n' && grade != ' ' && grade != '\t')
			   printf ("Не коректный ввод. Введите новую оценку\n");*/
							   

	   if (grade == 'A' || grade == 'a')
		   ++aCount;
	   else
		   if (grade == 'B' || grade == 'b')
			   ++bCount;
		   else
			   if (grade == 'C' || grade == 'c')
				   ++cCount;
			   else
				   if (grade == 'D' || grade == 'd')
					   ++dCount;
				   else
					   if (grade == 'F' || grade == 'f')
						   ++fCount;
					   else
						   if (grade == '\n' || grade == ' ' || grade == '\t')
							   ;
						   else
							   printf ("Не коректный ввод. Введите новую оценку\n");
	      
   } 

   puts( "\nСумарная информация по символьным оценкам:" );
   printf( "A: %u\n", aCount ); 
   printf( "B: %u\n", bCount ); 
   printf( "C: %u\n", cCount ); 
   printf( "D: %u\n", dCount ); 
   printf( "F: %u\n", fCount ); 
     
   _getch ();
} 
