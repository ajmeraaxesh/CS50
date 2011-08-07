/*
 * Assesses the user input 
 * Demonstrates the use of Boolean ANDing
 */

#include <cs50.h>
#include <stdio.h>


int main(void)
{
  printf("Give me a number between 1 and 10 \n");
  int n = GetInt();

  if (n >= 1 && n <= 3)
    printf("You picked a small number!\n");
  else if (n >= 4 && n <= 6)
    printf("You picked a medium number!\n");
  else if (n >=7 && n <= 10)
    printf("You picked a large number!\n");
  else
    printf("You picked an invlaid number!\n");
}
