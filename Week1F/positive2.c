/*
 * Demonstrates the use of bool operator and also the use of do..while construct
 *
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  bool thankful = false;
  do
  {
    printf("I'd demand to give me a positive integer \n");
    
    if(GetInt() > 0)
      thankful = true;

  }while(thankful == false);
  
    printf("Thanks for the positive number\n");
}
