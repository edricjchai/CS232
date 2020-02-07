/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, c;
  while(r != 0){    
     printf("Enter radius (in mm):\n");
     scanf("%f", &r);
     if(r != 0){
     a = (PI * r * r)/645.16;

     printf("Circle's area is %3.2f (sq in).\n", a);

     c = (2 * PI * r)/25.4;
     printf("Its circumference is  %3.2f (in).\n", c);
     }
  }
  printf("Exit\n");
}
