/*
 * This program converts farahnheit to celsius
 * Also dmeonstrates the use of GetInt 
 */


#include <stdio.h>

int main()
{
  int temperature;
  float answer;
  printf("Enter the Temperature  in  fahranheit:- ");
  scanf("%d",&temperature);
  answer  = 5/(float)9 *(temperature - 32);
  printf("%.2f\n",answer);
}
