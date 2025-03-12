#include <stdio.h>
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nother = nwhite = 0;

    for ( i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }
    
    while ((c = getchar()) != EOF )
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        }

        else if (c == ' ' || c == '\t' || c == '\n')    
        {
            ++nwhite;
        }

        else ++nother;
        
        
    }

    printf("white space = %d, other = %d, liczby:\n", nwhite, nother);
    for ( i = 0; i < 10; i++)
    {
        printf("%d: %d\n", i, ndigit[i]);
    }
return 0;
}

// int main() {
//     int c, i, nwhite, nother;
//     int ndigit[10] = {0};  // Inicjalizacja tablicy zerami

//     nwhite = nother = 0;

//     // Pobieranie wejścia i analiza znaków
//     while ((c = getchar()) != EOF) {
//         if (c >= '0' && c <= '9') {
//             ++ndigit[c - '0'];  // Zwiększenie licznika dla danej cyfry
//         } else if (c == ' ' || c == '\t' || c == '\n') {
//             ++nwhite;  // Liczenie białych znaków
//         } else {
//             ++nother;  // Wszystkie inne znaki
//         }
//     }

//     // Wyświetlenie wyników
//     printf("\nBiałe znaki: %d\nInne znaki: %d\n\n", nwhite, nother);
//     printf("Liczby i ich ilość:\n");

//     for (i = 0; i < 10; i++) {
//         printf("%d: %d\n", i, ndigit[i]);  // Wyświetlanie liczby i jej ilości
//     }

//     return 0;
// }