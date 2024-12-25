#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
     char code[100], message[100];
     int starCount = 0, hashCount = 0;

     fgets(code, sizeof(code), stdin);
     fgets(message, sizeof(message), stdin);
     code[strcspn(code, "\n")] = 0;
     message[strcspn(message, "\n")] = 0;

     if (strlen(code) != strlen(message))
     {
          printf("Panjang kalimat berbeda, pesan palsu\n");
          return 0;
     }

     for (int i = 0; code[i]; i++)
     {
          if (isspace(code[i]) && isspace(message[i]))
               putchar(' ');
          else
               putchar(code[i] == message[i] ? '*' : '#'),
                   (code[i] == message[i]) ? starCount++ : hashCount++;
     }

     printf("\n* = %d\n# = %d\n%s\n", starCount, hashCount,
            starCount >= hashCount ? "Pesan Asli" : "Pesan Palsu");

     return 0;
}