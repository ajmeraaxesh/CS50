/*
 * Demonstrates the use of for loop
 *
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
  for(int i = 1; i <= 100; i++)
    {
      printf("Percent Complete: %d%%\r",i);
      fflush(stdout);
      sleep(1);
    }
}
