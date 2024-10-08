/*-------------------------------------------------------------
-------------- Program for display information ----------------
--------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char name[] = "Mostafa";
  char lastName[] = "Rhazlani";
  int age = 21;
  char sex = 'M';
  char email[] = "mo.rhazlani@gmail.com";

  printf("My full name is %s %s, I am %d, and my sex is %c, and that my email %s", name, lastName, age, sex, email);
}