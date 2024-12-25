#include <stdio.h>

int main()
{
     float pasukanYuZhong = 958730;
     float pahlawan = 5;
     float jumlahPasukanPerPahlawan = pasukanYuZhong / pahlawan;

     printf("Jumlah pasukan yang dibawa Yu Zhong = %.0f\n", pasukanYuZhong);
     printf("Jumlah pahlawan = %.0f\n", pahlawan);
     printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0f", jumlahPasukanPerPahlawan);

     return 0;
}