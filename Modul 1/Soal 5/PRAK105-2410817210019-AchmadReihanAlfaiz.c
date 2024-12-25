#include <stdio.h>

int main()
{
     int a = 9, b = 5, x = 8, y = 8, sisa_a = a % b, sisa_x = x % y, total_sisa = sisa_a + sisa_x;

     printf("Variabel a bernilai %d\nVariabel b bernilai %d\nVariabel x bernilai %d\nVariabel y bernilai %d\n", a, b, x, y);
     printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d", total_sisa);

     return 0;
}