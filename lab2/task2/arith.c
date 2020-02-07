/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, c;

  printf("Enter radius (in mm):\n");
  scanf("%f", &r);

  a = (PI * r * r)/645.16;

  printf("Circle's area is %3.2f (sq in).\n", a);

  c = (2 * PI * r)/25.4;
  printf("Its circumference is  %3.2f (in).\n", c);
}
