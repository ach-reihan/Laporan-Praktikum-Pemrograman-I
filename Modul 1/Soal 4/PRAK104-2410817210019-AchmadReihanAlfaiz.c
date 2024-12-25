#include <stdio.h>

int main()
{
     float sepatuA = 400000, sepatuB = 350000, sepatuADiskon = sepatuA * (1 - 0.13), sepatuBDiskon = sepatuB * (1 - 0.21);

     printf("Harga sepatu A adalah %.0f\n", sepatuA);
     printf("Harga sepatu B adalah %.0f\n", sepatuB);

     printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", sepatuADiskon);
     printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f", sepatuBDiskon);

     return 0;
}