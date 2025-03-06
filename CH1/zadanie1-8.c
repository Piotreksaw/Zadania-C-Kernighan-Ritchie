//  /* count blanks, tabs, and newlines */
#include <stdio.h> 
main() 
{ 
    int c, nl, tab, blank;
    nl = 0; 
    tab = 0;
    blank = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl; }
        if (c == '\t') {
            ++tab; }        
        if (c == ' ') {
            ++blank; }
        }
    printf("\nLiczba przejść do kolejnej linii %d\n", nl); 
    printf("Liczba tabulacji %d i spacji %d", tab, blank); 
}


// #include <stdio.h>
//  /* count blanks, tabs, and newlines */
//  main() 
// {

//  int c, nb, nt, nl;
//  nb = 0;
//  nt = 0;
//  nl = 0; 
// /* number of blanks */
//  /* number of tabs */
//  /* number of newlines */
//  while ((c = getchar()) != EOF) { 
// if (c == '')
//  ++ nb;
//  if ( c == '\t')
//  ++ nt;
//  if (c == '\n')
//  ++nl ;
//  }
//  printf(“%d %d %d\n", nb, nt, nl);
//  }