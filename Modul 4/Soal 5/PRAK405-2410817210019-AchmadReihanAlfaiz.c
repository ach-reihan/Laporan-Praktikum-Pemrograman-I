#include <stdio.h>

int main()
{
     int n, multiplier, grandTotal = 0;
     scanf("%d %d", &n, &multiplier);

     for (int i = 1; i <= n; i++)
     {
          int sum = (i * (i + 1) / 2) * multiplier;
          grandTotal += sum;

          for (int j = 1; j <= i; j++)
               printf("%s(%d * %d)", j > 1 ? " + " : "", j > 1 ? i - j + 1 : i, multiplier);
          printf(" = %d\n", sum);
     }

     printf("%d\n", grandTotal);
     return 0;
}