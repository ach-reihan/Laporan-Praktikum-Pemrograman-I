#include <stdio.h>

int main()
{
     int userInput;
     scanf("%d", &userInput);

     char nilaiHuruf = (userInput >= 80) ? 'A' : (userInput >= 70) ? 'B'
                                             : (userInput >= 60)   ? 'C'
                                             : (userInput >= 50)   ? 'D'
                                                                   : 'E';

     printf("\nOutput: \n%c", nilaiHuruf);

     return 0;
}