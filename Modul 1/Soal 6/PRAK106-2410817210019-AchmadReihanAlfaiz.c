#include <stdio.h>

int main()
{
     int a = 4, b = 8, c = 3;
     int aEqualB = a == b, bGreaterThanC = b > c, aIsNotEqualC = a != c;

     printf("Variabel a bernilai %d\nVariabel b bernilai %d\nVariabel c bernilai %d\n", a, b, c);
     printf("Apakah a sama dengan b ? jawabannya adalah %d\n", aEqualB);
     printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", bGreaterThanC);
     printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", aIsNotEqualC);

     return 0;
}