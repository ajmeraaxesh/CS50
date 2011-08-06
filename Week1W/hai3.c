/*
 * Says Hi to everyone
 * Demonstrates the use of GetString function of CS50
 */

#include <cs50.h>
#include <stdio.h>

int main()
{
  printf("Enter your name: ");
  string name = GetString();
  printf("O hai, %s\n",name);
}
