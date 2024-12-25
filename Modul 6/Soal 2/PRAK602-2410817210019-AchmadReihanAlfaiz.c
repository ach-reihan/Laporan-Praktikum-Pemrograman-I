#include <stdio.h>

int main()
{
     int valueCount;
     scanf("%d", &valueCount);

     int result[valueCount];

     for (int i = 0; i < valueCount; i++)
          scanf("%d", &result[i]), result[i] *= (i + 1);

     for (int i = 0; i < valueCount; i++)
          printf("%d ", result[i]);

     return 0;
}