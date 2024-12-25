#include <stdio.h>

int main()
{
     int userInput;
     scanf("%d", &userInput);

     printf("\nOutput: \n");
     (userInput > 0) ? printf("positif") : (userInput < 0) ? printf("negatif")
                                                           : printf("nol");

     return 0;
}