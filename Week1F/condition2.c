/*
 * Demonstrates the use of if else conditions
 * Asks the user for input and determinsthe user entered 0 or positive number or negative number
 */

#include <cs50.h>
#include <stdio.h>


int main(void)
{
  printf("I'd would like to get an integer please:  ");
  int n = GetInt();
  
  if(n > 0)
    printf("You have entered a positive number\n");
  else if(n == 0)
    printf("You have entered zero\n");
  else
    printf("You have entered a negative number\n");

}
