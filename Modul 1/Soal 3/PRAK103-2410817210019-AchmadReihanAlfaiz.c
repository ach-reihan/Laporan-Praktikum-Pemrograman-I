#include <stdio.h>

int main()
{
     float a = 9, b = 6, x = 10, y = 7, hasil = ((a + b) * x / y);
     printf("Variabel a bernilai %.0f\nVariabel b bernilai %.0f\nVariabel x bernilai %.0f\nVariabel y bernilai %.0f\n", a, b, x, y);
     printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", hasil);

     return 0;
}