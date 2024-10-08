/*-------------------------------------------------------------
-------- Program for calculate Average three numbers ----------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() {

  float num_1 = 3;
  float num_2;
  float num_3;

  printf("Enter first number: ");

  printf("Enter second number: ");
  scanf("%f", &num_2);

  printf("Enter third number: ");
  scanf("%f", &num_3);

  float res = (num_1 + num_2 + num_3) / 3;

  printf("Result: %f", res);
  return 0;
}