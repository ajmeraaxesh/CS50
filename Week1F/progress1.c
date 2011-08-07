/*
 *
 * Demopnstrates the use of loop
 */


#include <stdio.h>
#include <unistd.h>

int main(void)
{
  for(int i = 1; i <= 100; i++)
    {
      printf("Percent Complete: %d%%\n",i);
      sleep(1);
    }
}
