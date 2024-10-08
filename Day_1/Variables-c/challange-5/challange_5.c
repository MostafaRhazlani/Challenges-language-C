/*-------------------------------------------------------------
-------------- Program for display type of water --------------
-------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int celsius;

  printf("\nEnter celsuis number: ");
  scanf("%d", &celsius);

  if(celsius < 0) {
    printf("Solide");
  } else if(0 <= celsius && celsius < 100) {
    printf("Liquid");
  } else if(celsius >= 100) {
    printf("Gaz");
  }

  return 0;
}