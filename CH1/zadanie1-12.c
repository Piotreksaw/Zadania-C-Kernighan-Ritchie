// Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1
#define OUT 0

 int main()
{
    int state;
    char c;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                putchar('\n'); /* wewnatrz slowa */
                state = OUT;
            }
            
            
        }
        else
        {
            
            putchar(c);
            state = IN; /* poczatek slowa*/
        }

    }
    return 0;
}

// #include <stdio.h>
// int main(void)
// {
//   int c;
//   int inspace;

//   inspace = 0;
//   while((c = getchar()) != EOF)
//   {
//     if(c == ' ' || c == '\t' || c == '\n')
//     {
//       if(inspace == 0)
//       {
//         inspace = 1;
//         putchar('\n');
//       }
//       /* else, don't print anything */
//     }
//     else
//     {ńńńń
//       inspace = 0;
//       putchar(c);
//     }
//   }
//   return 0;
// }

// int main() {
//     char c;
//     int in_word = 0; // Flag to track whether we are inside a word
    
//     while ((c = getchar()) != EOF) { // Read input character by character
//         if (c == ' ' || c == '\n' || c == '\t') { // Check for word delimiters
//             if (in_word) {
//                 putchar('\n'); // Print a newline when a word ends
//                 in_word = 0;
//             }
//         } else {
//             putchar(c); // Print the character
//             in_word = 1;
//         }
//     }
//     return 0;
// }


/* print inputone word per line */
// main()
// {
//     int c, state;
//     state = OUT;
//     while ((c = getchar()) != EOF) 
//     {
//             if (c == ' ' || c ==' \n' || c == '\t') 
//             {
//             if (state == IN) 
//                 {
//                 putchar('\n'); /* finish the word */
//                 state = OUT;
//                 }
//             }
//         else if (state == OUT) 
//         {
//                 state = IN; /* beginning of word */
//             putchar(c);
//         } 
//         else /* inside a word */
//         putchar(c);
//     }
// }