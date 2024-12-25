#include <stdio.h>

int main()
{
     char nama[40], kelasParalel[100], ttl[100], alamat[200], hobby[100], noHP[20], nim[20];

     printf("Nama                     : ");
     fgets(nama, sizeof(nama), stdin);
     printf("NIM                      : ");
     fgets(nim, sizeof(nim), stdin);
     printf("Kelas Paralel            : ");
     fgets(kelasParalel, sizeof(kelasParalel), stdin);
     printf("Tempat/Tanggal Lahir     : ");
     fgets(ttl, sizeof(ttl), stdin);
     printf("Alamat                   : ");
     fgets(alamat, sizeof(alamat), stdin);
     printf("Hobby                    : ");
     fgets(hobby, sizeof(hobby), stdin);
     printf("No. HP                   : ");
     fgets(noHP, sizeof(noHP), stdin);

     printf("\nOutput : \n");
     printf("Nama                     : %s", nama);
     printf("NIM                      : %s", nim);
     printf("Kelas Paralel            : %s", kelasParalel);
     printf("Tempat/Tanggal Lahir     : %s", ttl);
     printf("Alamat                   : %s", alamat);
     printf("Hobby                    : %s", hobby);
     printf("No. HP                   : %s", noHP);

     return 0;
}