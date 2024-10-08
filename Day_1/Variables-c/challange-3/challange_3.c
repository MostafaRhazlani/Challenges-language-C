/*-------------------------------------------------------------
-------------- Program for convert km to yards ----------------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  float yards = 1093.61;
  float kilometres; 

  printf("Convert kilometres to yards: ");
  scanf("%f", &kilometres);

  float res = kilometres * yards;

  printf("Yards = %.2f kilometres x %.2f \n", kilometres, yards);
  printf("Result = %.2f", res);
  return 0;
}