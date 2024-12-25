#include <stdio.h>

int main()
{
     float putaran = 5;
     float jarak = 14;
     float keliling_taman = jarak / putaran;
     float jari_jari = keliling_taman / (2 * 3.14);

     printf("Diketahui :\nPak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
     printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\nJawaban :\n", jarak);
     printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);

     return 0;
}