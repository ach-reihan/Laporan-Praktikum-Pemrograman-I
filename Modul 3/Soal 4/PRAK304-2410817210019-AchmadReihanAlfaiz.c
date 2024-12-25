#include <stdio.h>

int main()
{
     int userInput;
     scanf("%d", &userInput);

     printf("\nOutput: \n");

     if (userInput == 10 || (userInput >= 20 && userInput < 100))
     {
          printf("Puluhan");
     }
     else if (userInput >= 11 && userInput <= 19)
     {
          printf("Belasan");
     }
     else if (userInput >= 1 && userInput <= 9)
     {
          printf("Satuan");
     }
     else if (userInput == 0)
     {
          printf("Nol");
     }
     else
     {
          printf("Anda Menginput Melebihi Limit Bilangan");
     }

     return 0;
}