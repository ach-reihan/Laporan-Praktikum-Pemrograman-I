#include <stdio.h>

int main()
{

     int a = 4, b = 5, c = 7;
     int keliling = a + b + c;
     int harga = 85000;
     int biaya = keliling * harga;

     printf("Diketahui :\nPanjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
     printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
     printf("Harga tanah Per meter adalah %d\nJawaban :\n", harga);
     printf("Biaya yang diperlukan Pak Dengklek adalah : %d", biaya);

     return 0;
}