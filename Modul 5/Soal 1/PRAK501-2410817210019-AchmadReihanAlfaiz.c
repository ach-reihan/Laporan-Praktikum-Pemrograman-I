#include <stdio.h>
#include <math.h>

int MaxBilangan(int a, int b, int c, int d)
{
     return fmax(fmax(a, b), fmax(c, d));
}

int main()
{
     int a, b, c, d;
     scanf("%d %d %d %d", &a, &b, &c, &d);
     int hasil = MaxBilangan(a, b, c, d);
     printf("%d", hasil);
     return 0;
}
