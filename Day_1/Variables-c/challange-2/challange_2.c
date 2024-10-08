/*-------------------------------------------------------------
----------- Program for convert celsuis to kelvin -------------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  float kelvin = 273.15;
  float celsuis;

  printf("Enter a number:");
  scanf("%f", &celsuis);

  float result = celsuis + kelvin;

  printf("K = C: %.2f + %.2f \n", kelvin, celsuis);
  printf("Kelvin = %.2f\n", result);

  return 0;
}