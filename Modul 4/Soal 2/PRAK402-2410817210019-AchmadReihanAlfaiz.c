#include <stdio.h>

int main()
{
     int max;
     scanf("%d", &max);

     for (int i = 1; i <= max; i += 2)
     {
          printf("%d ", i);
     }
     printf("\n");

     for (int i = (max % 2 == 0 ? max : max - 1); i >= 2; i -= 2)
     {
          printf("%d ", i);
     }

     return 0;
}