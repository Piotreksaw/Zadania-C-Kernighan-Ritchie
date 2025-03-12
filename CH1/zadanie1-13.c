// Write a program to print a histogram of the lengths of words in its input. 
//It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

#define IN 1
#define OUT 0

#define MAXHIST 15
#define MAXWORD 11



int main()
{
    int c, i, nc, state;
    int len;
    int maxvalue;
    int overflow;
    int wl[MAXWORD];

    state = OUT;
    nc = 0;
    overflow = 0;

    for ( i = 0; i < MAXWORD; i++)
    {
        wl[i] = 0; /* zapelnianie tablicy zerami*/
    }
    while ((c = getchar()) != EOF)
    {
        if (state = OUT)
        {
            
        }
        
    }
    
    

}
