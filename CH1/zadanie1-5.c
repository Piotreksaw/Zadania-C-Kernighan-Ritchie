#include <stdio.h> 
 
   /* print Fahrenheit-Celsius table 
       for fahr = 0, 20, ..., 300 */ 
   int main() 
   { 
     float fahr, celsius; 
     int lower, upper, step; 
 
     lower = 0;      /* lower limit of temperature scale */ 
     upper = 300;    /* upper limit */ 
     step = 20;      /* step size */ 
 
     fahr = lower; 
     printf("Konwersja temperatury \n");

     while (fahr <= upper) { 
         celsius = 5.0 * (fahr-32.0) / 9.0; 
         printf("%3.0f %6.1f\n", fahr, celsius); 

         fahr = fahr + step;

     }
printf("\nodwrócona tabela:\n");
     for (fahr = upper; fahr >= lower; fahr = fahr - step)
     {
        celsius = 5.0 * (fahr-32.0) / 9.0; 
         printf("%3.0f %6.1f\n", fahr, celsius); 
     }

    }