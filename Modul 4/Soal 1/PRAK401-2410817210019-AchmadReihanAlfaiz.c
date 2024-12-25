#include <stdio.h>

int main()
{
     int numberInput, symbolInput;
     scanf("%d %c", &numberInput, &symbolInput);

     int min = 1, max = 50;

     for (int i = min; i <= max; i++)
     {
          if (i % numberInput == 0)
          {
               printf("%c ", symbolInput);
               continue;
          }

          printf("%d ", i);
     }
     return 0;
}