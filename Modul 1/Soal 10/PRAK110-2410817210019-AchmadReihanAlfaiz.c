#include <stdio.h>
#include <math.h>

int main()
{
     float alas = 5.0, tinggi = 12.0;
     float sisi_b = sqrt(alas * alas + tinggi * tinggi);
     float luas = 0.5 * alas * tinggi;
     float keliling = alas + tinggi + sisi_b;

     printf("Diketahui : \nAlas = %.0f cm \nTinggi = %.0f cm \n", alas, tinggi);
     printf("\nJawab :\n");
     printf("Sisi A = %.0f cm\n", tinggi);
     printf("Sisi B = %.0f cm\n", sisi_b);
     printf("Sisi C = %.0f cm\n", alas);
     printf("Keliling = %.0f cm\n", keliling);
     printf("Luas = %.0f cm\n", luas);

     return 0;
}