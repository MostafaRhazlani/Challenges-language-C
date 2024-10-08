/*-------------------------------------------------------------
-------- Program for calculate Average geometric ----------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double a,b,c, moyenne_geometrique ;

  printf("Enter first number:");
  scanf("%lf", &a);

  printf("Enter second number:");
  scanf("%lf", &b);

  printf("Enter third number:");
  scanf("%lf", &c);
 
  double res = pow((a * b * c), 1.0 / 3.0);

  printf("%.2lf", res);

  
  
  return 0;
}