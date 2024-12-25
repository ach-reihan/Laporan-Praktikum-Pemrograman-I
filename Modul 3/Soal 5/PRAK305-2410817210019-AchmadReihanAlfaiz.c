#include <stdio.h>

int main()
{
     int userInput;
     scanf("%d", &userInput);

     int detik, menit, jam, hari;
     detik = userInput % 60;
     menit = (userInput / 60) % 60;
     jam = (userInput / 3600) % 24;
     hari = userInput / 86400;

     if (userInput >= 86400)
     {
          printf("\nOutput: \n%d hari %02d:%02d:%02d", hari, jam, menit, detik);
     }
     else
     {
          printf("\nOutput: \n%02d:%02d:%02d", jam, menit, detik);
     }

     return 0;
}