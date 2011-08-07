/*
 * Demonstrates the use f while loop
 * Displays a progress bar
 *
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int i = 1;
  while(i != 100)
    {
      printf("Percentage Complete: %d%%\r",i);
      fflush(stdout);
      sleep(1);
      i++;
    }

}
