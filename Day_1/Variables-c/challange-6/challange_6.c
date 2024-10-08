/*-------------------------------------------------------------
-------------- Program for calculate two number ---------------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() {

  float num_1;
  float num_2;

  printf("Enter first number: ");
  scanf("%f", &num_1);

  printf("Enter second number: ");
  scanf("%f", &num_2);

  printf("%.2f + %.2f = %.2f\n", num_1, num_2, num_1 + num_2);
  printf("%.2f - %.2f = %.2f\n", num_1, num_2, num_1 - num_2);
  printf("%.2f x %.2f = %.2f\n", num_1, num_2, num_1 * num_2);
  printf("%.2f / %.2f = %.2f\n", num_1, num_2, num_1 / num_2);
  return 0;
}