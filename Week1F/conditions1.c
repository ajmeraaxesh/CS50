/*
 * Demonstrates the use of if else conditions
 * Axesh R. Ajmera
 * Tells the user if his input is positive or negative(inaccurately)
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("I'd like an integer please: ");
  int n = GetInt();

  if(n > 0)
    printf("You picked a positive number\n");
  else
    printf("YOu picked a negative number\n");

}
