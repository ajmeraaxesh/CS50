/*
 * Demonstrates the use of do while construct
 * Ask the user for positive number 
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    printf("I demand that you give me a positive integer: ");
    n  = GetInt();
  }while(n < 1);

  printf("Thanks for %d!\n",n);
}
