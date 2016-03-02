#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int grade, sum, i;
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0; 
   unsigned int fCount = 0; 

   puts( "Введите симольные оценки"  );
   puts( "Введите EOF символ для выхода."  );

   while ( ( grade = getchar() ) != EOF ) {
      
      switch ( grade ) { 

         case 'A': 
         case 'a': 
            ++aCount; 
            break; 

         case 'B': 
         case 'b': 
            ++bCount; 
            break; 

         case 'C': 
         case 'c': 
            ++cCount; 
            break; 

         case 'D': 
         case 'd': 
            ++dCount; 
            break; 

         case 'F': 
         case 'f': 
            ++fCount; 
            break; 

         case '\n': 
         case '\t': 
         case ' ': 
            break; 

         default: 
            printf( "%s", "Введена неправильная буквенная оценка." ); 
            puts( " Введите новую оценку." ); 
            break; 
      } 
   } 

   puts( "\nИтоговые данные по каждой буквенной оценке:" );
   printf( "A: %u\n", aCount ); 
   printf( "B: %u\n", bCount ); 
   printf( "C: %u\n", cCount ); 
   printf( "D: %u\n", dCount ); 
   printf( "F: %u\n", fCount ); 

   sum = aCount * 90 + bCount * 80 + cCount * 70 + dCount * 60 + fCount * 50;
   i = aCount + bCount + cCount + dCount + fCount;
   
   if (sum / i >= 90)
	   printf ("Средняя оценка %d - A", sum / i);
   else
	   if (sum / i >= 80)
		   printf ("Средняя оценка %d - B", sum / i);
	   else
		   if (sum / i >= 70)
		      printf ("Средняя оценка %d - C", sum / i);
		   else
			   if (sum / i >= 60)
		          printf ("Средняя оценка %d - D", sum / i);
			   else
				   if (sum / i >= 50)
		              printf ("Средняя оценка %d - F", sum / i);

   _getch ();
} 
