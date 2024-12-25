#include <stdio.h>

int main()
{
     int pilihan;
     float num1, num2;

     while (1)
     {
          printf("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan: ");
          scanf("%d", &pilihan);

          if (pilihan == 5)
          {
               printf("Terimakasih, telah menggunakan kalkulator Achmad Reihan Alfaiz\n\n");
               break;
          }

          if (pilihan < 1 || pilihan > 4)
          {
               printf("Input Anda salah, silakan coba lagi\n");
               continue;
          }

          printf("Masukkan nilai pertama: ");
          scanf("%f", &num1);
          printf("Masukkan nilai kedua: ");
          scanf("%f", &num2);

          switch (pilihan)
          {
          case 1:
               printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1 + num2);
               break;
          case 2:
               printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1 - num2);
               break;
          case 3:
               printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1 * num2);
               break;
          case 4:
               if (num2)
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", num1, num2, num1 / num2);
               else
                    printf("Error: Division by zero\n");
               break;
          }
     }

     return 0;
}