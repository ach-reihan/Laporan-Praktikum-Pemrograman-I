#include <stdio.h>

int main()
{
     int n1, n2;
     scanf("%d %d", &n1, &n2);

     if (n1 != n2)
     {
          printf("Jumlah tidak sama\n");
          return 0;
     }

     int row1[n1], row2[n2];

     for (int i = 0; i < n1; i++)
          scanf("%d", &row1[i]);

     for (int i = 0; i < n2; i++)
          scanf("%d", &row2[i]);

     for (int i = 0; i < n1; i++)
          printf("%d ", row1[i] * row2[i]);

     return 0;
}