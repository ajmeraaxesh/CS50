/*
 * Demonstrates the use of switch
 * Assesses the user input based on switch
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("Give me a number between 1 and 10: ");
  int n = GetInt();
  switch(n)
  {
    case 1:
    case 2:
    case 3:
      printf("You picked a small number!\n");
      break;

    case 4:
    case 5:
    case 6:
      printf("You picked up a medium number!\n");
      break;
    case 7:
    case 8:
    case 9:
    case 10:
      printf("You picked up a large number!\n");
      break;
  default:
    printf("You picked an invalid number!\n");   
  }

}
