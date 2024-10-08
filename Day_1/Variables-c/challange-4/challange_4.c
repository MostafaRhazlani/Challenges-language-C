/*-------------------------------------------------------------
-------------- Program for convert km/h to m/s ----------------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  float mitre_second = 0.27778;
  float km_hour;

  printf("Convert km in hour to mitre in second: ");
  scanf("%f", &km_hour);

  float res = km_hour * mitre_second;

  printf("m/s = %.2f km in hour x %.5f \n", km_hour, mitre_second);
  printf("result = %.2f m/s", res);

  return 0;
}