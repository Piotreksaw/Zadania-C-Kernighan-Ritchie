#include <stdio.h> 
   /* copy input to output; 2nd version  */ 
   int main() 
   { 
   
       int c; 
       while ((c = getchar()) != EOF)
       printf("wpisane znaki: \n");
       printf("%d\n", c );
       printf( "%d - at E0F\n", c);
   }
