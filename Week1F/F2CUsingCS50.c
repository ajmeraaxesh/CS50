/*
 * Demostrates the conversion of farhaheit to temperature using CS50
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("Enter temperature in F:  ");
  float F = GetFloat();
  
  float c = 5/(float)9 *(F - 32);
  printf("%.2f F = %.2f c\n",F,c);
}
